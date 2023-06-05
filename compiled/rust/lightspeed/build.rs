use std::env;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let out_dir = env::var("OUT_DIR").unwrap();

    tonic_build::configure()
        .out_dir("src/")
        .build_client(false)
        .file_descriptor_set_path(format!("{}/lightspeed.bin", out_dir))
        .compile(
            &[
                "src/protos/services/service.proto",
                "src/protos/devices/device.proto",
            ],
            &["src/protos/"],
        )?;
    Ok(())
}
