// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protocol/server.proto

package lightspeed.server;

public final class Server {
  private Server() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\025protocol/server.proto\022\021lightspeed.serv" +
      "er\032\033protocol/main/request.proto\032\034protoco" +
      "l/main/response.proto\032\037protocol/properti" +
      "es/props.proto2\310\001\n\014AstroService\022\\\n\nGetDe" +
      "vices\022%.lightspeed.request.GetDevicesReq" +
      "uest\032\'.lightspeed.response.GetDevicesRes" +
      "ponse\022Z\n\013SetProperty\022$.lightspeed.props." +
      "SetPropertyRequest\032%.lightspeed.props.Se" +
      "tPropertyResponseP\000P\001P\002b\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          lightspeed.request.Request.getDescriptor(),
          lightspeed.response.Response.getDescriptor(),
          lightspeed.props.Props.getDescriptor(),
        });
    lightspeed.request.Request.getDescriptor();
    lightspeed.response.Response.getDescriptor();
    lightspeed.props.Props.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
