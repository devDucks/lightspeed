# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protocol/devices/device.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from protocol.properties import props_pb2 as protocol_dot_properties_dot_props__pb2
try:
  protocol_dot_devices_dot_actions__pb2 = protocol_dot_properties_dot_props__pb2.protocol_dot_devices_dot_actions__pb2
except AttributeError:
  protocol_dot_devices_dot_actions__pb2 = protocol_dot_properties_dot_props__pb2.protocol.devices.actions_pb2

from protocol.properties.props_pb2 import *

DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1dprotocol/devices/device.proto\x12\x12lightspeed.devices\x1a\x1fprotocol/properties/props.proto\"\xfa\x01\n\x0bProtoDevice\x12\n\n\x02id\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12.\n\nproperties\x18\x03 \x03(\x0b\x32\x1a.lightspeed.props.Property\x12\x0f\n\x07\x61\x64\x64ress\x18\x04 \x01(\t\x12\x0c\n\x04\x62\x61ud\x18\x05 \x01(\x05\x12\x36\n\x06\x66\x61mily\x18\x06 \x01(\x0e\x32&.lightspeed.devices.ProtoDevice.Family\"J\n\x06\x46\x61mily\x12\x07\n\x03\x43\x43\x44\x10\x00\x12\t\n\x05MOUNT\x10\x01\x12\x0b\n\x07\x46OCUSER\x10\x02\x12\x10\n\x0c\x46ILTER_WHEEL\x10\x03\x12\r\n\tPOWER_BOX\x10\x04P\x00\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'protocol.devices.device_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _PROTODEVICE._serialized_start=87
  _PROTODEVICE._serialized_end=337
  _PROTODEVICE_FAMILY._serialized_start=263
  _PROTODEVICE_FAMILY._serialized_end=337
# @@protoc_insertion_point(module_scope)
