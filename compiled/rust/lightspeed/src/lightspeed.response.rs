#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertiesResponse {
    #[prost(string, tag = "1")]
    pub device_id: ::prost::alloc::string::String,
    #[prost(message, repeated, tag = "2")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDeviceResponse {
    #[prost(message, optional, tag = "1")]
    pub device: ::core::option::Option<super::devices::AstroDevice>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDevicesResponse {
    #[prost(message, repeated, tag = "1")]
    pub devices: ::prost::alloc::vec::Vec<super::devices::AstroDevice>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetSerialDeviceResponse {
    #[prost(message, optional, tag = "1")]
    pub device: ::core::option::Option<super::devices::AstroSerialDevice>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetSerialDevicesResponse {
    #[prost(message, repeated, tag = "1")]
    pub devices: ::prost::alloc::vec::Vec<super::devices::AstroSerialDevice>,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct EfwCalibrationResponse {
    #[prost(string, tag = "1")]
    pub status: ::prost::alloc::string::String,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SetPropertyResponse {
    #[prost(enumeration = "super::devices::actions::DeviceActions", tag = "1")]
    pub status: i32,
}
