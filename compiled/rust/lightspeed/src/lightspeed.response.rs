#[derive(Clone, PartialEq, ::prost::Message)]
pub struct GetPropertiesResponse {
    #[prost(string, tag="1")]
    pub device_name: ::prost::alloc::string::String,
    #[prost(message, repeated, tag="2")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
}
