pub mod props {
    include!("lightspeed.props.rs");
}

pub mod devices {
    include!("lightspeed.devices.rs");
    pub mod actions {
        include!("lightspeed.devices.actions.rs");
    }
}

pub mod request {
    include!("lightspeed.request.rs");
}

pub mod response {
    include!("lightspeed.response.rs");
}

pub mod server {
    include!("lightspeed.server.rs");
}

pub mod proto {
    pub const FD_DESCRIPTOR_SET: &[u8] = include_bytes!("lightspeed.bin");
}
