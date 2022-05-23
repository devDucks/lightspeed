#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDevicesRequest {
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetDeviceRequest {
    #[prost(string, tag="1")]
    pub device_id: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertiesRequest {
    #[prost(string, tag="1")]
    pub device_name: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertyRequest {
    #[prost(string, tag="1")]
    pub device_name: ::prost::alloc::string::String,
    #[prost(string, tag="2")]
    pub property_name: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SetPropertyRequest {
    #[prost(string, tag="1")]
    pub device_name: ::prost::alloc::string::String,
    #[prost(string, tag="2")]
    pub property_name: ::prost::alloc::string::String,
    #[prost(string, tag="3")]
    pub property_value: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct PropertyRequest {
    #[prost(oneof="property_request::Ask", tags="1, 2")]
    pub ask: ::core::option::Option<property_request::Ask>,
}
/// Nested message and enum types in `PropertyRequest`.
pub mod property_request {
    #[derive(Clone, PartialEq, ::prost::Oneof)]
    pub enum Ask {
        #[prost(message, tag="1")]
        Property(super::GetPropertyRequest),
        #[prost(message, tag="2")]
        Properties(super::GetPropertiesRequest),
    }
}
