pub mod props {
    include!("lightspeed.props.rs");
}

pub mod devices {
    include!("lightspeed.devices.rs");
    pub mod actions {
        include!("lightspeed.devices.actions.rs");
    }
}

pub mod request {
    include!("lightspeed.request.rs");
}

pub mod response {
    include!("lightspeed.response.rs");
}

pub mod service {
    include!("lightspeed.service.rs");
}

pub mod proto {
    pub const FD_DESCRIPTOR_SET: &[u8] = include_bytes!("lightspeed.bin");
}

pub mod properties {
    use serde::{Deserialize, Serialize};

    #[derive(Debug)]
    pub enum PermissionError {
        CannotUpdateReadOnlyProp,
    }

    #[derive(Clone, Copy, Debug, Deserialize, Eq, Hash, Ord, PartialEq, PartialOrd, Serialize)]
    pub enum Permission {
        ReadOnly = 0,
        ReadWrite,
    }

    #[derive(Clone, Copy, Debug, Deserialize, Eq, Hash, Ord, PartialEq, PartialOrd, Serialize)]
    struct Range<T> {
        min: T,
        max: T,
    }

    impl<T> Range<T> {
        fn new(min: T, max: T) -> Self {
            Self { min, max }
        }

        fn max(&self) -> &T {
            &self.max
        }

        fn min(&self) -> &T {
            &self.min
        }
    }

    #[derive(Clone, Copy, Debug, Deserialize, Eq, Hash, Ord, PartialEq, PartialOrd, Serialize)]
    #[serde(deny_unknown_fields)]
    pub struct Property<T> {
        #[serde(rename = "value")]
        val: T,
        permission: Permission,
        range: Option<Range<T>>,
    }

    impl<T> Property<T> {
        pub fn new(value: T, permission: Permission, range: Option<(T, T)>) -> Self {
            if let Some(r) = range {
                return Self {
                    val: value,
                    permission,
                    range: Some(Range::new(r.0, r.1)),
                };
            } else {
                return Self {
                    val: value,
                    permission,
                    range: None,
                };
            }
        }

        pub fn value(&self) -> &T {
            &self.val
        }

        fn update_allowed(&self) -> Result<(), PermissionError> {
            if self.permission == Permission::ReadOnly {
                Err(PermissionError::CannotUpdateReadOnlyProp)
            } else {
                Ok(())
            }
        }

        pub fn update(&mut self, value: T) -> Result<(), PermissionError> {
            self.update_allowed()?;
            self.val = value;
            Ok(())
        }
    }

    #[derive(Clone, Copy, Debug, Deserialize, Eq, Hash, Ord, PartialEq, PartialOrd, Serialize)]
    pub struct BoolProperty {
        value: bool,
        permission: Permission,
    }

    impl BoolProperty {
        pub fn new(value: bool, permission: Permission) -> Self {
            Self { value, permission }
        }

        fn update_allowed(&self) -> Result<(), PermissionError> {
            if self.permission == Permission::ReadOnly {
                Err(PermissionError::CannotUpdateReadOnlyProp)
            } else {
                Ok(())
            }
        }

        pub fn update(&mut self) -> Result<(), PermissionError> {
            self.update_allowed()?;
            self.value = !self.value;
            Ok(())
        }
    }

    #[cfg(test)]
    mod unit_tests {
        use super::{BoolProperty, Permission, Property};
        use std::borrow::Cow;

        #[test]
        fn test_bool_prop_initialization() {
            let p = BoolProperty::new(false, Permission::ReadOnly);
            assert_eq!(p.value, false);
        }

        #[test]
        fn test_bool_prop_readonly_cannot_be_updated() -> Result<(), String> {
            let mut p = BoolProperty::new(false, Permission::ReadOnly);
            match p.update() {
                Ok(()) => Err(String::from(
                    "It should not be possible to update a ReadOnly property",
                )),
                Err(_) => {
                    assert_eq!(p.value, false);
                    Ok(())
                }
            }
        }

        #[test]
        fn test_bool_prop_readwrite_can_be_written() -> Result<(), String> {
            let mut p = BoolProperty::new(false, Permission::ReadWrite);
            match p.update() {
                Ok(()) => {
                    assert_eq!(p.value, true);
                    Ok(())
                }
                Err(_) => Err(String::from(
                    "It MUST be possible to update a WriteOnly property",
                )),
            }
        }

        #[test]
        fn test_numeric_prop_readonly_cannot_be_updated() -> Result<(), String> {
            let mut p: Property<u64> = Property::new(78, Permission::ReadOnly, None);
            match p.update(55) {
                Ok(()) => Err(String::from(
                    "It should not be possible to update a ReadOnly property",
                )),
                Err(_) => {
                    assert_eq!(p.value(), &78_u64);
                    Ok(())
                }
            }
        }

        #[test]
        fn test_numeric_prop_readwrite_can_be_written() -> Result<(), String> {
            let mut p = Property::<u64>::new(78, Permission::ReadWrite, None);
            match p.update(55) {
                Ok(()) => {
                    assert_eq!(p.value(), &55_u64);
                    Ok(())
                }
                Err(_) => Err(String::from(
                    "It MUST be possible to update a WriteOnly property",
                )),
            }
        }

        #[test]
        fn test_cow_borrow_prop_readwrite_can_be_written() -> Result<(), String> {
            let mut p = Property::<Cow<'static, str>>::new(
                Cow::Borrowed("test"),
                Permission::ReadWrite,
                None,
            );
            match p.update(Cow::Borrowed("done")) {
                Ok(()) => {
                    assert_eq!(p.value(), "done");
                    Ok(())
                }
                Err(_) => Err(String::from(
                    "It MUST be possible to update a WriteOnly property",
                )),
            }
        }

        #[test]
        fn test_cow_owned_prop_readwrite_can_be_written() -> Result<(), String> {
            let mut p = Property::<Cow<'static, str>>::new(
                Cow::Owned(String::from("test")),
                Permission::ReadWrite,
                None,
            );
            match p.update(Cow::Owned(String::from("done"))) {
                Ok(()) => {
                    assert_eq!(p.value(), "done");
                    Ok(())
                }
                Err(_) => Err(String::from(
                    "It MUST be possible to update a WriteOnly property",
                )),
            }
        }

        #[test]
        fn test_str_prop_initialization_no_range() {
            let test_str = String::from("test");
            let p = Property::new(test_str.clone(), Permission::ReadOnly, None);
            assert_eq!(p.value(), &test_str);
        }

        #[test]
        fn test_num_prop_initialization_no_range() {
            let test_val = 5;
            let p = Property::new(test_val.clone(), Permission::ReadOnly, None);
            assert_eq!(p.value(), &test_val);
        }

        #[test]
        fn test_float_prop_initialization_no_range() {
            let test_val = 5.32_f64;
            let p = Property::new(test_val.clone(), Permission::ReadOnly, None);
            assert_eq!(p.value(), &test_val);
        }

        #[test]
        fn test_float_prop_initialization_range() {
            let test_val = 5.32_f64;
            let min_range = 10.0_f64;
            let max_range = 100.0_f64;
            let p = Property::new(
                test_val.clone(),
                Permission::ReadOnly,
                Some((min_range.clone(), max_range.clone())),
            );
            assert_eq!(p.range.unwrap().min(), &min_range);
            assert_eq!(p.range.unwrap().max(), &max_range);
        }
    }

    #[cfg(test)]
    mod serialization_tests {
        use super::{BoolProperty, Permission, Property};

        #[test]
        fn test_serialize_num_prop_no_range() {
            let p = Property::new(5, Permission::ReadOnly, None);
            let serialized = serde_json::to_string(&p).unwrap();
            assert_eq!(
                serialized,
                r#"{"value":5,"permission":"ReadOnly","range":null}"#
            );
        }

        #[test]
        fn test_serialize_num_prop_with_range() {
            let p = Property::new(5, Permission::ReadOnly, Some((1, 100)));
            let serialized = serde_json::to_string(&p).unwrap();
            assert_eq!(
                serialized,
                r#"{"value":5,"permission":"ReadOnly","range":{"min":1,"max":100}}"#
            );
        }

        #[test]
        fn test_serialize_bool_prop() {
            let p = BoolProperty::new(true, Permission::ReadOnly);
            let serialized = serde_json::to_string(&p).unwrap();
            assert_eq!(serialized, r#"{"value":true,"permission":"ReadOnly"}"#);
        }
    }
}
