.PHONY = generate-java

generate-java:
	@protoc --java_out compiled/java protocol/*/*.proto protocol/*.proto

.PHONY = generate-cpp

generate-cpp:
	@protoc --cpp_out compiled/cpp/lightspeed protocol/*/*.proto protocol/*.proto

.PHONY = generate-python

generate-python:
	@protoc --python_out compiled/python/lightspeed protocol/*/*.proto protocol/*.proto

.PHONY = generate-all

generate-all: generate-java generate-python generate-cpp
