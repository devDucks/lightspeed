#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct Property {
    #[prost(string, tag = "1")]
    pub name: ::prost::alloc::string::String,
    #[prost(string, tag = "2")]
    pub value: ::prost::alloc::string::String,
    #[prost(string, tag = "3")]
    pub kind: ::prost::alloc::string::String,
    #[prost(enumeration = "Permission", tag = "4")]
    pub permission: i32,
}
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, ::prost::Enumeration)]
#[repr(i32)]
pub enum Permission {
    ReadOnly = 0,
    ReadWrite = 1,
    WriteOnly = 2,
}
impl Permission {
    /// String value of the enum field names used in the ProtoBuf definition.
    ///
    /// The values are not transformed in any way and thus are considered stable
    /// (if the ProtoBuf definition does not change) and safe for programmatic use.
    pub fn as_str_name(&self) -> &'static str {
        match self {
            Permission::ReadOnly => "ReadOnly",
            Permission::ReadWrite => "ReadWrite",
            Permission::WriteOnly => "WriteOnly",
        }
    }
    /// Creates an enum from field names used in the ProtoBuf definition.
    pub fn from_str_name(value: &str) -> ::core::option::Option<Self> {
        match value {
            "ReadOnly" => Some(Self::ReadOnly),
            "ReadWrite" => Some(Self::ReadWrite),
            "WriteOnly" => Some(Self::WriteOnly),
            _ => None,
        }
    }
}
