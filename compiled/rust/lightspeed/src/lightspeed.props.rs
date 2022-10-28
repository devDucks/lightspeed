#[derive(Clone, PartialEq, ::prost::Message)]
pub struct Property {
    #[prost(string, tag="1")]
    pub name: ::prost::alloc::string::String,
    #[prost(string, tag="2")]
    pub value: ::prost::alloc::string::String,
    #[prost(string, tag="3")]
    pub kind: ::prost::alloc::string::String,
    #[prost(enumeration="Permission", tag="4")]
    pub permission: i32,
}
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, ::prost::Enumeration)]
#[repr(i32)]
pub enum Permission {
    ReadOnly = 0,
    ReadWrite = 1,
    WriteOnly = 2,
}
