# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: protocol/main/request.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x1bprotocol/main/request.proto\x12\x12lightspeed.request\"+\n\x14GetPropertiesRequest\x12\x13\n\x0b\x64\x65vice_name\x18\x01 \x01(\t\"@\n\x12GetPropertyRequest\x12\x13\n\x0b\x64\x65vice_name\x18\x01 \x01(\t\x12\x15\n\rproperty_name\x18\x02 \x01(\t\"X\n\x12SetPropertyRequest\x12\x13\n\x0b\x64\x65vice_name\x18\x01 \x01(\t\x12\x15\n\rproperty_name\x18\x02 \x01(\t\x12\x16\n\x0eproperty_value\x18\x03 \x01(\t\"\x94\x01\n\x0fPropertyRequest\x12:\n\x08property\x18\x01 \x01(\x0b\x32&.lightspeed.request.GetPropertyRequestH\x00\x12>\n\nproperties\x18\x02 \x01(\x0b\x32(.lightspeed.request.GetPropertiesRequestH\x00\x42\x05\n\x03\x61skb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'protocol.main.request_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  _GETPROPERTIESREQUEST._serialized_start=51
  _GETPROPERTIESREQUEST._serialized_end=94
  _GETPROPERTYREQUEST._serialized_start=96
  _GETPROPERTYREQUEST._serialized_end=160
  _SETPROPERTYREQUEST._serialized_start=162
  _SETPROPERTYREQUEST._serialized_end=250
  _PROPERTYREQUEST._serialized_start=253
  _PROPERTYREQUEST._serialized_end=401
# @@protoc_insertion_point(module_scope)