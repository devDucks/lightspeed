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
TODO
