# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protocol/properties/props.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from protocol.devices import actions_pb2 as protocol_dot_devices_dot_actions__pb2

from protocol.devices.actions_pb2 import *

DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1fprotocol/properties/props.proto\x12\x10lightspeed.props\x1a\x1eprotocol/devices/actions.proto\"g\n\x08Property\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t\x12\x0c\n\x04kind\x18\x03 \x01(\t\x12\x30\n\npermission\x18\x04 \x01(\x0e\x32\x1c.lightspeed.props.Permission\"V\n\x12SetPropertyRequest\x12\x11\n\tdevice_id\x18\x01 \x01(\t\x12\x15\n\rproperty_name\x18\x02 \x01(\t\x12\x16\n\x0eproperty_value\x18\x03 \x01(\t\"P\n\x13SetPropertyResponse\x12\x39\n\x06status\x18\x01 \x01(\x0e\x32).lightspeed.devices.actions.DeviceActions*8\n\nPermission\x12\x0c\n\x08ReadOnly\x10\x00\x12\r\n\tReadWrite\x10\x01\x12\r\n\tWriteOnly\x10\x02P\x00\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'protocol.properties.props_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _PERMISSION._serialized_start=360
  _PERMISSION._serialized_end=416
  _PROPERTY._serialized_start=85
  _PROPERTY._serialized_end=188
  _SETPROPERTYREQUEST._serialized_start=190
  _SETPROPERTYREQUEST._serialized_end=276
  _SETPROPERTYRESPONSE._serialized_start=278
  _SETPROPERTYRESPONSE._serialized_end=358
# @@protoc_insertion_point(module_scope)
