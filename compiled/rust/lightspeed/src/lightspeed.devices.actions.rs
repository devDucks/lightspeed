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
