#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, PartialOrd, Ord, ::prost::Enumeration)]
#[repr(i32)]
pub enum DeviceActions {
    Ok = 0,
    CannotConnect = 1,
    ComError = 2,
    Timeout = 3,
    CannotUpdateReadOnlyProperty = 4,
    UnknownProperty = 5,
    InvalidValue = 6,
}
impl DeviceActions {
    /// String value of the enum field names used in the ProtoBuf definition.
    ///
    /// The values are not transformed in any way and thus are considered stable
    /// (if the ProtoBuf definition does not change) and safe for programmatic use.
    pub fn as_str_name(&self) -> &'static str {
        match self {
            DeviceActions::Ok => "Ok",
            DeviceActions::CannotConnect => "CannotConnect",
            DeviceActions::ComError => "ComError",
            DeviceActions::Timeout => "Timeout",
            DeviceActions::CannotUpdateReadOnlyProperty => "CannotUpdateReadOnlyProperty",
            DeviceActions::UnknownProperty => "UnknownProperty",
            DeviceActions::InvalidValue => "InvalidValue",
        }
    }
    /// Creates an enum from field names used in the ProtoBuf definition.
    pub fn from_str_name(value: &str) -> ::core::option::Option<Self> {
        match value {
            "Ok" => Some(Self::Ok),
            "CannotConnect" => Some(Self::CannotConnect),
            "ComError" => Some(Self::ComError),
            "Timeout" => Some(Self::Timeout),
            "CannotUpdateReadOnlyProperty" => Some(Self::CannotUpdateReadOnlyProperty),
            "UnknownProperty" => Some(Self::UnknownProperty),
            "InvalidValue" => Some(Self::InvalidValue),
            _ => None,
        }
    }
}
