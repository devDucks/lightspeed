#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct AstroSerialDevice {
    #[prost(string, tag = "1")]
    pub id: ::prost::alloc::string::String,
    #[prost(string, tag = "2")]
    pub name: ::prost::alloc::string::String,
    #[prost(message, repeated, tag = "3")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
    #[prost(string, tag = "4")]
    pub address: ::prost::alloc::string::String,
    #[prost(int32, tag = "5")]
    pub baud: i32,
    #[prost(enumeration = "Family", tag = "6")]
    pub family: i32,
}
#[allow(clippy::derive_partial_eq_without_eq)]
#[derive(Clone, PartialEq, ::prost::Message)]
pub struct AstroDevice {
    #[prost(string, tag = "1")]
    pub id: ::prost::alloc::string::String,
    #[prost(string, tag = "2")]
    pub name: ::prost::alloc::string::String,
    #[prost(message, repeated, tag = "3")]
    pub properties: ::prost::alloc::vec::Vec<super::props::Property>,
    #[prost(enumeration = "Family", tag = "4")]
    pub family: i32,
}
#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, ::prost::Enumeration)]
#[repr(i32)]
pub enum Family {
    Ccd = 0,
    Mount = 1,
    Focuser = 2,
    FilterWheel = 3,
    PowerBox = 4,
}
impl Family {
    /// String value of the enum field names used in the ProtoBuf definition.
    ///
    /// The values are not transformed in any way and thus are considered stable
    /// (if the ProtoBuf definition does not change) and safe for programmatic use.
    pub fn as_str_name(&self) -> &'static str {
        match self {
            Family::Ccd => "CCD",
            Family::Mount => "MOUNT",
            Family::Focuser => "FOCUSER",
            Family::FilterWheel => "FILTER_WHEEL",
            Family::PowerBox => "POWER_BOX",
        }
    }
    /// Creates an enum from field names used in the ProtoBuf definition.
    pub fn from_str_name(value: &str) -> ::core::option::Option<Self> {
        match value {
            "CCD" => Some(Self::Ccd),
            "MOUNT" => Some(Self::Mount),
            "FOCUSER" => Some(Self::Focuser),
            "FILTER_WHEEL" => Some(Self::FilterWheel),
            "POWER_BOX" => Some(Self::PowerBox),
            _ => None,
        }
    }
}
