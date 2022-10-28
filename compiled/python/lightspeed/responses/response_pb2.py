# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: responses/response.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from properties import props_pb2 as properties_dot_props__pb2
from devices import device_pb2 as devices_dot_device__pb2
try:
  properties_dot_props__pb2 = devices_dot_device__pb2.properties_dot_props__pb2
except AttributeError:
  properties_dot_props__pb2 = devices_dot_device__pb2.properties.props_pb2
from devices import actions_pb2 as devices_dot_actions__pb2

from properties.props_pb2 import *
from devices.device_pb2 import *
from devices.actions_pb2 import *

DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x18responses/response.proto\x12\x13lightspeed.response\x1a\x16properties/props.proto\x1a\x14\x64\x65vices/device.proto\x1a\x15\x64\x65vices/actions.proto\"\\\n\x15GetPropertiesResponse\x12\x13\n\x0b\x64\x65vice_name\x18\x01 \x01(\t\x12.\n\nproperties\x18\x02 \x03(\x0b\x32\x1a.lightspeed.props.Property\"D\n\x11GetDeviceResponse\x12/\n\x06\x64\x65vice\x18\x01 \x01(\x0b\x32\x1f.lightspeed.devices.AstroDevice\"F\n\x12GetDevicesResponse\x12\x30\n\x07\x64\x65vices\x18\x01 \x03(\x0b\x32\x1f.lightspeed.devices.AstroDevice\"P\n\x17GetSerialDeviceResponse\x12\x35\n\x06\x64\x65vice\x18\x01 \x01(\x0b\x32%.lightspeed.devices.AstroSerialDevice\"R\n\x18GetSerialDevicesResponse\x12\x36\n\x07\x64\x65vices\x18\x01 \x03(\x0b\x32%.lightspeed.devices.AstroSerialDevice\"(\n\x16\x45\x66wCalibrationResponse\x12\x0e\n\x06status\x18\x01 \x01(\t\"P\n\x13SetPropertyResponse\x12\x39\n\x06status\x18\x01 \x01(\x0e\x32).lightspeed.devices.actions.DeviceActionsP\x00P\x01P\x02\x62\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'responses.response_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _GETPROPERTIESRESPONSE._serialized_start=118
  _GETPROPERTIESRESPONSE._serialized_end=210
  _GETDEVICERESPONSE._serialized_start=212
  _GETDEVICERESPONSE._serialized_end=280
  _GETDEVICESRESPONSE._serialized_start=282
  _GETDEVICESRESPONSE._serialized_end=352
  _GETSERIALDEVICERESPONSE._serialized_start=354
  _GETSERIALDEVICERESPONSE._serialized_end=434
  _GETSERIALDEVICESRESPONSE._serialized_start=436
  _GETSERIALDEVICESRESPONSE._serialized_end=518
  _EFWCALIBRATIONRESPONSE._serialized_start=520
  _EFWCALIBRATIONRESPONSE._serialized_end=560
  _SETPROPERTYRESPONSE._serialized_start=562
  _SETPROPERTYRESPONSE._serialized_end=642
# @@protoc_insertion_point(module_scope)
