#[derive(Clone, PartialEq, ::prost::Message)]
pub struct ProtoDevice {
    #[prost(string, tag="1")]
    pub id: ::prost::alloc::string::String,
    #[prost(string, tag="2")]
    pub name: ::prost::alloc::string::String,
    #[prost(message, repeated, tag="3")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
    #[prost(string, tag="4")]
    pub address: ::prost::alloc::string::String,
    #[prost(int32, tag="5")]
    pub baud: i32,
    #[prost(enumeration="proto_device::Family", tag="6")]
    pub family: i32,
}
/// Nested message and enum types in `ProtoDevice`.
pub mod proto_device {
    #[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, ::prost::Enumeration)]
    #[repr(i32)]
    pub enum Family {
        Ccd = 0,
        Mount = 1,
        Focuser = 2,
        FilterWheel = 3,
        PowerBox = 4,
    }
}
