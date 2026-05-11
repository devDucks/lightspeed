# Lightspeed Architecture Diagrams

## Legend

```
┌──────────┐   software component / process
│  Name    │
└──────────┘

┌ ─ ─ ─ ─ ┐   host / machine boundary
 ─ ─ ─ ─ ─

━━━━━━━━━▶   MQTT publish / subscribe (network)
──────────▶   UDS / pipe (inter-process, same host)
──────────▶   TCP socket (inter-process, any host)
══════════▶   vendor SDK / USB / serial (hardware)
```

---

## Variant 1 — All on one host

The simplest deployment. The MQTT broker, lightspeed-server, and every driver live on the
same machine. Drivers talk to the server over Unix Domain Sockets (or pipes). Clients may
run on the same host or connect from the network.

```
┌─────────────────────────────────────────────────────────────────────┐
│  Observatory Host                                                    │
│                                                                      │
│  ┌─────────────────┐   UDS/pipe   ┌─────────────────────────────┐  │
│  │                 │◄─────────────│     lightspeed-server        │  │
│  │   MQTT Broker   │              └─────────────────────────────┘  │
│  │  (e.g. Mosquitto│              UDS/pipe ▲  ▲ UDS/pipe           │
│  │                 │◄─────────────────────┐│  │┌───────────────┐   │
│  └─────────────────┘                      ││  ││               │   │
│                                    ┌──────┴┴┐ ││ ┌────────────┐│  │
│                                    │ Camera │ ││ │   Mount    ││  │
│                                    │ Driver │ ││ │   Driver   ││  │
│                                    └────────┘ ││ └────────────┘│  │
│                                        ║      ││       ║        │  │
│                                    ┌───╨────┐ ││ ┌─────╨──────┐│  │
│                                    │  CCD   │ ││ │    Mount   ││  │
│                                    │ Camera │ ││ │            ││  │
│                                    └────────┘ ││ └────────────┘│  │
│                                               ││               │  │
│                             ┌─────────────────┘│               │  │
│                             │         ┌─────────┘               │  │
│                             │  ┌──────┴──────┐                  │  │
│                             │  │   Focuser   │                  │  │
│                             │  │   Driver   │                  │  │
│                             │  └─────────────┘                  │  │
│                             │         ║                          │  │
│                             │  ┌──────╨──────┐                  │  │
│                             │  │   Focuser   │                  │  │
│                             │  └─────────────┘                  │  │
│                             │                                    │  │
│                    MQTT pub/sub (loopback or LAN)               │  │
└─────────────────────────────┼──────────────────────────────────┘  │
                              │                                       │
              ┌───────────────┼───────────────────────┐              │
              │               │                       │              │
       ┌──────▼──────┐  ┌─────▼───────┐  ┌──────────▼─────┐        │
       │   Client A  │  │  Client B   │  │   Client C      │        │
       │  (AstroPy)  │  │  (KStars)   │  │ (web dashboard) │        │
       └─────────────┘  └─────────────┘  └────────────────┘        │
              │                                                      │
              └──────────────────────────────────────────────────────┘
                       (all on same host, or remote via LAN)
```

**Communication summary**

| Pair                        | Transport  |
|-----------------------------|------------|
| Client ↔ MQTT broker         | MQTT / TCP |
| lightspeed-server ↔ broker  | MQTT / UDS |
| lightspeed-server ↔ drivers | UDS / pipe |
| drivers ↔ physical devices  | USB / serial / vendor SDK |

---

## Variant 2 — Drivers and server on the same host, clients remote

Common for a Raspberry Pi at the scope feeding clients on a laptop or tablet on the same
LAN. All drivers and the server share one embedded host; clients are elsewhere on the
network and reach the MQTT broker over TCP.

```
┌──────────────────────────────────────────────────────────────┐
│  Observatory Pi (192.168.1.10)                               │
│                                                              │
│  ┌──────────────────┐  UDS    ┌──────────────────────────┐  │
│  │   MQTT Broker    │◄────────│    lightspeed-server      │  │
│  │  port :1883      │         └──────────────────────────┘  │
│  └──────────────────┘            UDS ▲   ▲ UDS              │
│           ▲                   ┌──────┘   └───────┐          │
│           │               ┌───┴────┐       ┌─────┴──┐       │
│    MQTT   │               │ Camera │       │ Mount  │       │
│   TCP     │               │ Driver │       │ Driver │       │
│   :1883   │               └────────┘       └────────┘       │
│           │                   ║                 ║            │
│           │               ┌───╨────┐       ┌────╨───┐       │
│           │               │  ZWO   │       │ iOptron│       │
│           │               │  ASI   │       │  CEM   │       │
│           │               └────────┘       └────────┘       │
└───────────┼──────────────────────────────────────────────────┘
            │  LAN (TCP)
      ──────┴──────
     /             \
┌────▼──────┐   ┌───▼──────────┐   ┌────────────▼──┐
│ Client A  │   │   Client B   │   │   Client C    │
│ (laptop)  │   │  (tablet)    │   │ (remote PC)   │
└───────────┘   └──────────────┘   └───────────────┘
```

---

## Variant 3 — Each driver on its own machine, server separate

Advanced setup for large observatories or distributed equipment racks. Each driver runs
on a dedicated host (could be an embedded board next to the device). The lightspeed-server
and MQTT broker run on a central server. All communication happens over TCP.

```
         ┌─────────────────────────────────────┐
         │  Central Server (192.168.1.1)        │
         │                                      │
         │  ┌──────────────────────────────┐   │
         │  │        MQTT Broker           │   │
         │  │        port :1883            │   │
         │  └──────────────────────────────┘   │
         │            ▲         ▲               │
         │  ┌─────────┴─────────┴──────────┐   │
         │  │     lightspeed-server         │   │
         │  │     (TCP connections          │   │
         │  │      to all drivers)          │   │
         │  └──────────────────────────────┘   │
         └─────────────┬────────────────────────┘
                       │ TCP
        ┌──────────────┼──────────────────────┐
        │              │                      │
┌───────▼──────┐ ┌─────▼────────┐ ┌──────────▼──────┐
│ Driver Host A│ │Driver Host B │ │  Driver Host C  │
│ 192.168.1.11 │ │192.168.1.12  │ │  192.168.1.13   │
│              │ │              │ │                 │
│ ┌──────────┐ │ │ ┌──────────┐ │ │ ┌─────────────┐ │
│ │  Camera  │ │ │ │  Mount   │ │ │ │   Focuser   │ │
│ │  Driver  │ │ │ │  Driver  │ │ │ │   Driver    │ │
│ └──────────┘ │ │ └──────────┘ │ │ └─────────────┘ │
│      ║       │ │      ║       │ │        ║         │
│ ┌────╨─────┐ │ │ ┌────╨─────┐ │ │ ┌──────╨──────┐ │
│ │ ZWO ASI  │ │ │ │ iOptron  │ │ │ │   Pegasus   │ │
│ │  Camera  │ │ │ │   Mount  │ │ │ │   Focuser   │ │
│ └──────────┘ │ │ └──────────┘ │ │ └─────────────┘ │
└──────────────┘ └──────────────┘ └─────────────────┘

         │  MQTT (TCP :1883)
 ────────┴────────────────────────────────────
│                   │                         │
┌──────▼──────┐ ┌───▼─────────┐ ┌────────────▼──┐
│  Client A   │ │  Client B   │ │   Client C    │
│  KStars     │ │  AstroPy    │ │  Web UI       │
│  (laptop)   │ │  (analysis) │ │  (remote)     │
└─────────────┘ └─────────────┘ └───────────────┘
```

**Communication summary**

| Pair                              | Transport       |
|-----------------------------------|-----------------|
| lightspeed-server ↔ drivers       | TCP socket      |
| lightspeed-server ↔ MQTT broker   | MQTT / TCP      |
| clients ↔ MQTT broker             | MQTT / TCP      |
| drivers ↔ physical devices        | USB / serial / vendor SDK |

---

## Variant 4 — Standalone driver (no server)

Because every lightspeed-compliant driver speaks the same MQTT topic API, a single driver
can be used directly by a client without any server in the middle. Useful for simple
single-device setups or during driver development.

```
┌────────────────────────────────────────┐
│  Single Host                           │
│                                        │
│  ┌────────────────────┐                │
│  │    MQTT Broker     │                │
│  └────────────────────┘                │
│         ▲         ▲                    │
│  UDS    │         │ MQTT               │
│  ┌──────┴───┐     │                    │
│  │  Camera  │     │                    │
│  │  Driver  │     │                    │
│  └──────────┘     │                    │
│       ║           │                    │
│  ┌────╨─────┐  ┌──┴──────────┐        │
│  │  Camera  │  │  Client App │        │
│  │ Hardware │  │  (any lang) │        │
│  └──────────┘  └─────────────┘        │
└────────────────────────────────────────┘
```

The driver publishes state to `devices/{id}` and the client subscribes directly. No
lightspeed-server process needed. The server becomes valuable only when you need to
aggregate multiple drivers, enforce permissions centrally, or expose devices over a network.

---

## Data flow (all variants)

```
  Client wants to change a property:

  Client ──MQTT pub──▶ devices/{id}/set ──▶ Server/Driver
                                                   │
                                           validates permission
                                                   │
                                           updates device state
                                                   │
  Client ◀──MQTT pub── devices/{id}  ◀─────────────┘
  (and all other subscribers)

  Client wants to read state:

  Client ──subscribe──▶ devices/{id}
                              │
                     receives push update
                     whenever state changes
                     (no polling needed)
```
