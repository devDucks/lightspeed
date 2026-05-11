# lightspeed
A new lightweight and digestable protocol to talk to astronomical devices

# Actual state of the art
If I had to guess, today there are mainly two protocols to talk to astronomical devices (with one coming to life soon):
- ASCOM => the de-facto standard for Windows
- INDI => the de-facto standard on Linux
- ASCOM/Alpaca => wants to be an ASCOM without COM that runs on all major platforms (Linux, MacOS and Windows)

Let's look at pros/cons of these solutions.

## ASCOM
[ASCOM](https://ascom-standards.org/) is the long-standing standard for astronomical device drivers on Windows, built on COM.
### Pros
- Well-established ecosystem with a large number of existing drivers
- Works well within the Windows ecosystem
### Cons
- Fundamentally platform-locked to Windows (built on COM)
- Polling-oriented design — clients must query device state rather than receiving pushed updates

## ASCOM/Alpaca
[ASCOM Alpaca](https://www.ascom-standards.org/Developer/Alpaca.htm) is ASCOM's answer to cross-platform interoperability: it wraps the same ASCOM device interface in a REST/JSON HTTP API, making devices reachable over a network from any OS.
### Pros
- Cross-platform: reachable from any OS over HTTP
- Reuses the existing ASCOM device interface, so existing ASCOM drivers can be wrapped with relatively little effort
- JSON over HTTP is easy to consume from any language
### Cons
- Inherits ASCOM's polling-oriented design — clients must query device state rather than receiving pushed updates
- REST over HTTP carries more overhead than a lightweight binary or message-broker-based protocol

## INDI
The indi protocol is well documented and you can find the official spec [here](http://docs.indilib.org/protocol/).
The architecture is mostly pretty nice, the communication flows from clients to the server through sockets and then the server process
talks to driver processes through UNIX pipes.
The protocol is stateless and it uses XML to encode data between client and servers

### Pros
- simplicity - the protocol itself is pretty easy to implement and parse
- well architected - there is enough room to move pieces around, one for example may want to run INDI server on a machine and the client on another one, and raw socket communication keeps the overall complexity low
- works on UNIX
### Cons
- XML transport — XML itself is not without merit: it is human-readable, self-describing, and widely supported. However, INDI's use of it over raw sockets introduces real practical problems. There is no EOF marker or message framing: messages are a continuous stream of XML fragments, which means partial messages can arrive mid-read and parsers must buffer and reassemble them manually. This makes writing a robust, from-scratch INDI client significantly harder than it should be. XML is also more verbose than modern alternatives (JSON, MessagePack, etc.), which matters on low-bandwidth or embedded setups.
- UNIX pipes — fast and elegant on UNIX, but they constrain the architecture: drivers must run on the same machine as the server, and the approach does not carry over to Windows.
- Broadcast client/server communication — the server streams all messages to every connected client, leaving filtering entirely to the client side. This makes it difficult to write lightweight read-only consumers (e.g. for monitoring or data analysis) and complicates implementing new clients outside of the reference implementation.
- UNIX-only — does not run on Windows.


# A perfect world
In a perfect world things would work more or less like this:
- the server/client communication should use an easiest and lighter format, JSON
- clients may be interested only in a subset of the data asked by another client
- clients SHOULD never poll the server to ask for new data, the server should instead push data to clients, additionally it should push only the data the given client requested and not data asked by other clients
- the server should be able to run on the 3 major platforms natively - Linux, MacOS, Windows -
- the drivers should be able to run on the 3 major platforms natively - Linux, MacOS, Windows - this may actually mean doing some things differently on different platforms, but the API should be mantained.
- communication server <=> drivers should offer the best from every platform (e.g. UNIX sockets on UNIX and Windows sockets on Windows) or alternatively they may be run as standalone processes served over TCP sockets, this would make the entire architecture even more flexible given that now client, server and drivers may run on 3 different machines.

# Lightspeed, a new choice for the future?
The lightspeed protocol wants to be a new era in the inter device communication for astronomical purposes, it wants to be simple, concise, with a clean API and ultra fast.

Lightspeed must be flexible, this means that drivers _may_ be hidden behind a server but that _should not_ be the only possibility; if a driver will be
lightspeed compliant, it means that the driver itself may be used in multiple applications, **IN THE SAME WAY**

Example: a driver for a camera will be used by an astrophotography application, what about another application which main goal is to do only planetary imaging? While on windows this can be achieved with ASCOM drivers, the same cannot be told on UNIX, there is no uniformity nor standards on UNIX and usually every app bakes again and again the SDKs delivered by manifacturers in their app. This creates even more fragmentation in the ecosystem.
Wouldn't be wonderful to have 1 driver that can be used in the same way on all platforms, that will communicate the same way, that can be used in multiple app no matter the language/platform and for which we can provide a language agnostic interface?

YES

Lightspeed compliant drivers share a common communication spec, allowing either the server or the client to talk directly to devices in a language-agnostic way. Communication drivers may be implemented over any transport: UDS (Unix Domain Sockets), TCP sockets, MQTT, or even (PLEASE DON'T DO IT) HTTP API.

# Device API

Each device in the lightspeed ecosystem exposes a well-defined API. While the underlying transport may vary, all devices share a common set of conventions so that clients can interact with any device in a uniform way.

## Common MQTT Topic API

All lightspeed-compliant devices share the following MQTT topic structure:

- `devices/{id}` — the device publishes its current state here. Clients subscribe to this topic to receive real-time updates whenever the device state changes. The payload is a JSON object reflecting the full or partial device state.
- `devices/{id}/set` — clients publish to this topic to modify a device property. The payload is a JSON object containing the property name(s) and desired value(s).

This push-based model means clients never need to poll; they simply subscribe and react to state changes as they arrive.

## Device-specific APIs

Each device type extends the common topic API with its own set of readable properties and writable commands. The sections below document the API for each supported device.

### TODO: Camera
### TODO: Mount
### TODO: Focuser
### TODO: Filter Wheel
### TODO: Rotator
