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

//! Generated file from `protocol/main/response.proto`

/// Generated files are compatible only with the same version
/// of protobuf runtime.
const _PROTOBUF_VERSION_CHECK: () = ::protobuf::VERSION_3_0_2;

#[derive(PartialEq,Clone,Default,Debug)]
// @@protoc_insertion_point(message:lightspeed.response.GetPropertiesResponse)
pub struct GetPropertiesResponse {
    // message fields
    // @@protoc_insertion_point(field:lightspeed.response.GetPropertiesResponse.device_name)
    pub device_name: ::std::string::String,
    // @@protoc_insertion_point(field:lightspeed.response.GetPropertiesResponse.properties)
    pub properties: ::std::vec::Vec<super::props::Property>,
    // special fields
    // @@protoc_insertion_point(special_field:lightspeed.response.GetPropertiesResponse.special_fields)
    pub special_fields: ::protobuf::SpecialFields,
}

impl<'a> ::std::default::Default for &'a GetPropertiesResponse {
    fn default() -> &'a GetPropertiesResponse {
        <GetPropertiesResponse as ::protobuf::Message>::default_instance()
    }
}

impl GetPropertiesResponse {
    pub fn new() -> GetPropertiesResponse {
        ::std::default::Default::default()
    }

    fn generated_message_descriptor_data() -> ::protobuf::reflect::GeneratedMessageDescriptorData {
        let mut fields = ::std::vec::Vec::with_capacity(2);
        let mut oneofs = ::std::vec::Vec::with_capacity(0);
        fields.push(::protobuf::reflect::rt::v2::make_simpler_field_accessor::<_, _>(
            "device_name",
            |m: &GetPropertiesResponse| { &m.device_name },
            |m: &mut GetPropertiesResponse| { &mut m.device_name },
        ));
        fields.push(::protobuf::reflect::rt::v2::make_vec_simpler_accessor::<_, _>(
            "properties",
            |m: &GetPropertiesResponse| { &m.properties },
            |m: &mut GetPropertiesResponse| { &mut m.properties },
        ));
        ::protobuf::reflect::GeneratedMessageDescriptorData::new_2::<GetPropertiesResponse>(
            "GetPropertiesResponse",
            fields,
            oneofs,
        )
    }
}

impl ::protobuf::Message for GetPropertiesResponse {
    const NAME: &'static str = "GetPropertiesResponse";

    fn is_initialized(&self) -> bool {
        true
    }

    fn merge_from(&mut self, is: &mut ::protobuf::CodedInputStream<'_>) -> ::protobuf::Result<()> {
        while let Some(tag) = is.read_raw_tag_or_eof()? {
            match tag {
                10 => {
                    self.device_name = is.read_string()?;
                },
                18 => {
                    self.properties.push(is.read_message()?);
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
        if !self.device_name.is_empty() {
            my_size += ::protobuf::rt::string_size(1, &self.device_name);
        }
        for value in &self.properties {
            let len = value.compute_size();
            my_size += 1 + ::protobuf::rt::compute_raw_varint64_size(len) + len;
        };
        my_size += ::protobuf::rt::unknown_fields_size(self.special_fields.unknown_fields());
        self.special_fields.cached_size().set(my_size as u32);
        my_size
    }

    fn write_to_with_cached_sizes(&self, os: &mut ::protobuf::CodedOutputStream<'_>) -> ::protobuf::Result<()> {
        if !self.device_name.is_empty() {
            os.write_string(1, &self.device_name)?;
        }
        for v in &self.properties {
            ::protobuf::rt::write_message_field_with_cached_size(2, v, os)?;
        };
        os.write_unknown_fields(self.special_fields.unknown_fields())?;
        ::std::result::Result::Ok(())
    }

    fn special_fields(&self) -> &::protobuf::SpecialFields {
        &self.special_fields
    }

    fn mut_special_fields(&mut self) -> &mut ::protobuf::SpecialFields {
        &mut self.special_fields
    }

    fn new() -> GetPropertiesResponse {
        GetPropertiesResponse::new()
    }

    fn clear(&mut self) {
        self.device_name.clear();
        self.properties.clear();
        self.special_fields.clear();
    }

    fn default_instance() -> &'static GetPropertiesResponse {
        static instance: GetPropertiesResponse = GetPropertiesResponse {
            device_name: ::std::string::String::new(),
            properties: ::std::vec::Vec::new(),
            special_fields: ::protobuf::SpecialFields::new(),
        };
        &instance
    }
}

impl ::protobuf::MessageFull for GetPropertiesResponse {
    fn descriptor() -> ::protobuf::reflect::MessageDescriptor {
        static descriptor: ::protobuf::rt::Lazy<::protobuf::reflect::MessageDescriptor> = ::protobuf::rt::Lazy::new();
        descriptor.get(|| file_descriptor().message_by_package_relative_name("GetPropertiesResponse").unwrap()).clone()
    }
}

impl ::std::fmt::Display for GetPropertiesResponse {
    fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::fmt::Result {
        ::protobuf::text_format::fmt(self, f)
    }
}

impl ::protobuf::reflect::ProtobufValue for GetPropertiesResponse {
    type RuntimeType = ::protobuf::reflect::rt::RuntimeTypeMessage<Self>;
}

static file_descriptor_proto_data: &'static [u8] = b"\
    \n\x1cprotocol/main/response.proto\x12\x13lightspeed.response\x1a\x1fpro\
    tocol/properties/props.protoP\0\"t\n\x15GetPropertiesResponse\x12\x1f\n\
    \x0bdevice_name\x18\x01\x20\x01(\tR\ndeviceName\x12:\n\nproperties\x18\
    \x02\x20\x03(\x0b2\x1a.lightspeed.props.PropertyR\npropertiesb\x06proto3\
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
            let mut deps = ::std::vec::Vec::with_capacity(1);
            deps.push(super::props::file_descriptor().clone());
            let mut messages = ::std::vec::Vec::with_capacity(1);
            messages.push(GetPropertiesResponse::generated_message_descriptor_data());
            let mut enums = ::std::vec::Vec::with_capacity(0);
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
