# lightspeed
A new lightweight and digestable protocol to talk to astronomical devices

# Actual state of the art
If I had to guess, today there are mainly two protocols to talk to astronomical devices (with one coming to life soon):
- ASCOM => the de-facto standard for Windows
- INDI => the de-facto standard on Linux
- ASCOM/Alpaca => wants to be an ASCOM without COM that runs on all major platforms (Linux, MacOS and Windows)

Let's look at pros/cons of these solutions.

## ASCOM
TODO
### Pros
TODO
### Cons
TODO

## ASCOM/Alpaca
TODO
### Pros
TODO
### Cons
TODO

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
- XML - not going to lie here, XML is a protocol from the past that should find no room in the modern world, it is heavier (you need more bytes to store the same amount of data) and is definitely more complex to parse because of its tree-like nature
- UNIX pipes - don't misunderestand me, personally I am huge fan of UNIX pipes, those are extremely fast and a joy to work with, this unfortunately has 2 downsides:
  - work only on UNIX based OS
  - processes talking to them must be on the same machine
- client/server communication - this, from my experience is the biggest pain when working with INDI, the server process streams whatever messagge to all connected clients, leaving to the client the ability to filter out some messages. This makes hard to implement new clients (not based on the basic one provided by INDI itself) and do some read-only work for external statistics, data analysis and similar things.
- UNIX - doesn't run on Windows


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

Welcome to protobuf, lightspeed compliant drivers will talk protocol buffers, if you don't know what are protobufs have a look [here](https://developers.google.com/protocol-buffers/) and this is why I opted for them:
- declarative - you declare with an easy syntax the messaged that will be passed on the wire
- portability - with protoc you define the messages and you will end up with **real code** in one of the supported language that can be immediately used to talk to whoever implements the same protocol
- language agnostic - again, you can compile actually to a lot of languages, C#, Java, Python or even **Rust**
- small format - the format is very small and it takes less space that other protocols like XML/JSON
- fast - usually marshalling to/from messages is very very performant

Thanks to protobuf either the server or the client can talk directly to devices (even in different languages), the spec will be mantained and communication drivers may be implemented in every possible way, UDS (Unix Domain Sockets), pipes, TCP sockets or even (PLEASE DON'T DO IT) HTTP API
