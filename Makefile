.PHONY = generate-all

generate-all: generate-python generate-cpp generate-dart generate-rust

.PHONY = generate-cpp

generate-cpp:
	@cd protos/ && protoc --cpp_out=../compiled/cpp/lightspeed */*.proto && cd -

.PHONY = generate-dart

generate-dart:
	@cd protos && protoc --dart_out=grpc:../compiled/dart/lightspeed/lib */*.proto && cd -

.PHONY = generate-python

generate-python:
	@cd protos && protoc --python_out=../compiled/python/lightspeed */*.proto && cd -

.PHONY = generate-rust

generate-rust:
	@cd compiled/rust/lightspeed && cargo build --release && cd -
