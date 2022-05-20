// This file is generated by rust-protobuf 3.0.2. Do not edit
// .proto file is parsed by protoc 3.19.4
// @generated

// https://github.com/rust-lang/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(unused_attributes)]
#![cfg_attr(rustfmt, rustfmt::skip)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unused_results)]
#![allow(unused_mut)]

//! Generated file from `protocol/properties/props.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_3_0_2;

#[derive(PartialEq,Clone,Default,Debug)]
// @@protoc_insertion_point(message:lightspeed.props.Property)
pub struct Property {
    // message fields
    // @@protoc_insertion_point(field:lightspeed.props.Property.name)
    pub name: ::std::string::String,
    // @@protoc_insertion_point(field:lightspeed.props.Property.value)
    pub value: ::std::string::String,
    // @@protoc_insertion_point(field:lightspeed.props.Property.kind)
    pub kind: ::std::string::String,
    // @@protoc_insertion_point(field:lightspeed.props.Property.permission)
    pub permission: ::protobuf::EnumOrUnknown<Permission>,
    // special fields
    // @@protoc_insertion_point(special_field:lightspeed.props.Property.special_fields)
    pub special_fields: ::protobuf::SpecialFields,
}

impl<'a> ::std::default::Default for &'a Property {
    fn default() -> &'a Property {
        <Property as ::protobuf::Message>::default_instance()
    }
}

impl Property {
    pub fn new() -> Property {
        ::std::default::Default::default()
    }

    fn generated_message_descriptor_data() -> ::protobuf::reflect::GeneratedMessageDescriptorData {
        let mut fields = ::std::vec::Vec::with_capacity(4);
        let mut oneofs = ::std::vec::Vec::with_capacity(0);
        fields.push(::protobuf::reflect::rt::v2::make_simpler_field_accessor::<_, _>(
            "name",
            |m: &Property| { &m.name },
            |m: &mut Property| { &mut m.name },
        ));
        fields.push(::protobuf::reflect::rt::v2::make_simpler_field_accessor::<_, _>(
            "value",
            |m: &Property| { &m.value },
            |m: &mut Property| { &mut m.value },
        ));
        fields.push(::protobuf::reflect::rt::v2::make_simpler_field_accessor::<_, _>(
            "kind",
            |m: &Property| { &m.kind },
            |m: &mut Property| { &mut m.kind },
        ));
        fields.push(::protobuf::reflect::rt::v2::make_simpler_field_accessor::<_, _>(
            "permission",
            |m: &Property| { &m.permission },
            |m: &mut Property| { &mut m.permission },
        ));
        ::protobuf::reflect::GeneratedMessageDescriptorData::new_2::<Property>(
            "Property",
            fields,
            oneofs,
        )
    }
}

impl ::protobuf::Message for Property {
    const NAME: &'static str = "Property";

    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::Result<()> {
        while let Some(tag) = is.read_raw_tag_or_eof()? {
            match tag {
                10 => {
                    self.name = is.read_string()?;
                },
                18 => {
                    self.value = is.read_string()?;
                },
                26 => {
                    self.kind = is.read_string()?;
                },
                32 => {
                    self.permission = is.read_enum_or_unknown()?;
                },
                tag => {
                    ::protobuf::rt::read_unknown_or_skip_group(tag, is, self.special_fields.mut_unknown_fields())?;
                },
            };
        }
        ::std::result::Result::Ok(())
    }

    // Compute sizes of nested messages
    #[allow(unused_variables)]
    fn compute_size(&self) -> u64 {
        let mut my_size = 0;
        if !self.name.is_empty() {
            my_size += ::protobuf::rt::string_size(1, &self.name);
        }
        if !self.value.is_empty() {
            my_size += ::protobuf::rt::string_size(2, &self.value);
        }
        if !self.kind.is_empty() {
            my_size += ::protobuf::rt::string_size(3, &self.kind);
        }
        if self.permission != ::protobuf::EnumOrUnknown::new(Permission::ReadOnly) {
            my_size += ::protobuf::rt::int32_size(4, self.permission.value());
        }
        my_size += ::protobuf::rt::unknown_fields_size(self.special_fields.unknown_fields());
        self.special_fields.cached_size().set(my_size as u32);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::Result<()> {
        if !self.name.is_empty() {
            os.write_string(1, &self.name)?;
        }
        if !self.value.is_empty() {
            os.write_string(2, &self.value)?;
        }
        if !self.kind.is_empty() {
            os.write_string(3, &self.kind)?;
        }
        if self.permission != ::protobuf::EnumOrUnknown::new(Permission::ReadOnly) {
            os.write_enum(4, ::protobuf::EnumOrUnknown::value(&self.permission))?;
        }
        os.write_unknown_fields(self.special_fields.unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn special_fields(&self) -> &::protobuf::SpecialFields {
        &self.special_fields
    }

    fn mut_special_fields(&mut self) -> &mut ::protobuf::SpecialFields {
        &mut self.special_fields
    }

    fn new() -> Property {
        Property::new()
    }

    fn clear(&mut self) {
        self.name.clear();
        self.value.clear();
        self.kind.clear();
        self.permission = ::protobuf::EnumOrUnknown::new(Permission::ReadOnly);
        self.special_fields.clear();
    }

    fn default_instance() -> &'static Property {
        static instance: Property = Property {
            name: ::std::string::String::new(),
            value: ::std::string::String::new(),
            kind: ::std::string::String::new(),
            permission: ::protobuf::EnumOrUnknown::from_i32(0),
            special_fields: ::protobuf::SpecialFields::new(),
        };
        &instance
    }
}

impl ::protobuf::MessageFull for Property {
    fn descriptor() -> ::protobuf::reflect::MessageDescriptor {
        static descriptor: ::protobuf::rt::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::rt::Lazy::new();
        descriptor.get(|| file_descriptor().message_by_package_relative_name("Property").unwrap()).clone()
    }
}

impl ::std::fmt::Display for Property {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for Property {
    type RuntimeType = ::protobuf::reflect::rt::RuntimeTypeMessage<Self>;
}

#[derive(Clone,Copy,PartialEq,Eq,Debug,Hash)]
// @@protoc_insertion_point(enum:lightspeed.props.Permission)
pub enum Permission {
    // @@protoc_insertion_point(enum_value:lightspeed.props.Permission.ReadOnly)
    ReadOnly = 0,
    // @@protoc_insertion_point(enum_value:lightspeed.props.Permission.WriteOnly)
    WriteOnly = 1,
    // @@protoc_insertion_point(enum_value:lightspeed.props.Permission.ReadWrite)
    ReadWrite = 2,
}

impl ::protobuf::Enum for Permission {
    const NAME: &'static str = "Permission";

    fn value(&self) -> i32 {
        *self as i32
    }

    fn from_i32(value: i32) -> ::std::option::Option<Permission> {
        match value {
            0 => ::std::option::Option::Some(Permission::ReadOnly),
            1 => ::std::option::Option::Some(Permission::WriteOnly),
            2 => ::std::option::Option::Some(Permission::ReadWrite),
            _ => ::std::option::Option::None
        }
    }

    const VALUES: &'static [Permission] = &[
        Permission::ReadOnly,
        Permission::WriteOnly,
        Permission::ReadWrite,
    ];
}

impl ::protobuf::EnumFull for Permission {
    fn enum_descriptor() -> ::protobuf::reflect::EnumDescriptor {
        static descriptor: ::protobuf::rt::Lazy<::protobuf::reflect::EnumDescriptor> = ::protobuf::rt::Lazy::new();
        descriptor.get(|| file_descriptor().enum_by_package_relative_name("Permission").unwrap()).clone()
    }

    fn descriptor(&self) -> ::protobuf::reflect::EnumValueDescriptor {
        let index = *self as usize;
        Self::enum_descriptor().value_by_index(index)
    }
}

impl ::std::default::Default for Permission {
    fn default() -> Self {
        Permission::ReadOnly
    }
}

impl Permission {
    fn generated_enum_descriptor_data() -> ::protobuf::reflect::GeneratedEnumDescriptorData {
        ::protobuf::reflect::GeneratedEnumDescriptorData::new::<Permission>("Permission")
    }
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n\x1fprotocol/properties/props.proto\x12\x10lightspeed.props\"\x86\x01\
    \n\x08Property\x12\x12\n\x04name\x18\x01\x20\x01(\tR\x04name\x12\x14\n\
    \x05value\x18\x02\x20\x01(\tR\x05value\x12\x12\n\x04kind\x18\x03\x20\x01\
    (\tR\x04kind\x12<\n\npermission\x18\x04\x20\x01(\x0e2\x1c.lightspeed.pro\
    ps.PermissionR\npermission*8\n\nPermission\x12\x0c\n\x08ReadOnly\x10\0\
    \x12\r\n\tWriteOnly\x10\x01\x12\r\n\tReadWrite\x10\x02b\x06proto3\
";

/// `FileDescriptorProto` object which was a source for this generated file
fn file_descriptor_proto() -> &'static ::protobuf::descriptor::FileDescriptorProto {
    static file_descriptor_proto_lazy: ::protobuf::rt::Lazy<::protobuf::descriptor::FileDescriptorProto> = ::protobuf::rt::Lazy::new();
    file_descriptor_proto_lazy.get(|| {
        ::protobuf::Message::parse_from_bytes(file_descriptor_proto_data).unwrap()
    })
}

/// `FileDescriptor` object which allows dynamic access to files
pub fn file_descriptor() -> &'static ::protobuf::reflect::FileDescriptor {
    static generated_file_descriptor_lazy: ::protobuf::rt::Lazy<::protobuf::reflect::GeneratedFileDescriptor> = ::protobuf::rt::Lazy::new();
    static file_descriptor: ::protobuf::rt::Lazy<::protobuf::reflect::FileDescriptor> = ::protobuf::rt::Lazy::new();
    file_descriptor.get(|| {
        let generated_file_descriptor = generated_file_descriptor_lazy.get(|| {
            let mut deps = ::std::vec::Vec::with_capacity(0);
            let mut messages = ::std::vec::Vec::with_capacity(1);
            messages.push(Property::generated_message_descriptor_data());
            let mut enums = ::std::vec::Vec::with_capacity(1);
            enums.push(Permission::generated_enum_descriptor_data());
            ::protobuf::reflect::GeneratedFileDescriptor::new_generated(
                file_descriptor_proto(),
                deps,
                messages,
                enums,
            )
        });
        ::protobuf::reflect::FileDescriptor::new_generated_2(generated_file_descriptor)
    })
}
