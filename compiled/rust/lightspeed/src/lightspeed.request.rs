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
    pub device_id: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertyRequest {
    #[prost(string, tag="1")]
    pub device_id: ::prost::alloc::string::String,
    #[prost(string, tag="2")]
    pub property_name: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct SetPropertyRequest {
    #[prost(string, tag="1")]
    pub device_id: ::prost::alloc::string::String,
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
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct CcdExposureRequest {
    #[prost(string, tag="1")]
    pub id: ::prost::alloc::string::String,
    #[prost(float, tag="2")]
    pub lenght: f32,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct CcdExposureResponse {
    #[prost(bytes="vec", tag="1")]
    pub data: ::prost::alloc::vec::Vec<u8>,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct CcdAbortExposureRequest {
    #[prost(string, tag="1")]
    pub id: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct CcdAbortExposureResponse {
    #[prost(string, tag="1")]
    pub status: ::prost::alloc::string::String,
}
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct EfwCalibrationRequest {
    #[prost(string, tag="1")]
    pub id: ::prost::alloc::string::String,
}
