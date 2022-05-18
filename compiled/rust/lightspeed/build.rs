use protobuf::reflect::FileDescriptor;
use protobuf_codegen::Codegen;
use protobuf_codegen::Customize;
use protobuf_codegen::CustomizeCallback;

fn main() {
    struct Cust;

    impl CustomizeCallback for Cust {
        fn file(&self, _field: &FileDescriptor) -> Customize {
            Customize::default().gen_mod_rs(false)
        }
    }

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/main/request.proto")
        .out_dir("src/")
        .customize_callback(Cust)
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/main/response.proto")
        .out_dir("src/")
        .customize_callback(Cust)
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/devices/device.proto")
        .out_dir("src/")
        .customize_callback(Cust)
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/properties/props.proto")
        .out_dir("src/")
        .customize_callback(Cust)
        .run_from_script();
}
