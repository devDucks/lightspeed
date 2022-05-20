use protobuf_codegen::Codegen;
use protobuf_codegen::Customize;

fn main() {
    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/main/request.proto")
        .out_dir("src/")
        .customize(Customize::default().gen_mod_rs(false))
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/main/response.proto")
        .out_dir("src/")
        .customize(Customize::default().gen_mod_rs(false))
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/devices/device.proto")
        .out_dir("src/")
        .customize(Customize::default().gen_mod_rs(false))
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/properties/props.proto")
        .out_dir("src/")
        .customize(Customize::default().gen_mod_rs(false))
        .run_from_script();

    Codegen::new()
        .protoc()
        .protoc_path(&protoc_bin_vendored::protoc_bin_path().unwrap())
        .includes(&["../../../"])
        .input("../../../protocol/server.proto")
        .out_dir("src/")
        .customize(Customize::default().gen_mod_rs(false))
        .run_from_script();
}
