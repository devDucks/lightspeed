#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertiesResponse {
    #[prost(string, tag="1")]
    pub device_name: ::prost::alloc::string::String,
    #[prost(message, repeated, tag="2")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDeviceResponse {
    #[prost(message, optional, tag="1")]
    pub device: ::core::option::Option<super::devices::ProtoDevice>,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDevicesResponse {
    #[prost(message, repeated, tag="1")]
    pub devices: ::prost::alloc::vec::Vec<super::devices::ProtoDevice>,
}
