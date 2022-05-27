use std::env;
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let proto_include_path = fs::canonicalize(env::var("PROTO_ROOT").unwrap()).unwrap();
    println!("PROTO_ROOT: {}", proto_include_path.display());

    tonic_build::configure()
        .out_dir("src/")
        .build_client(false)
        .file_descriptor_set_path("src/lightspeed.bin")
        .compile(
            &[
                format!("{}/protocol/server.proto", proto_include_path.display()),
                format!(
                    "{}/protocol/devices/device.proto",
                    proto_include_path.display()
                ),
            ],
            &[proto_include_path],
        )?;
    Ok(())
}
