fn main() -> Result<(), Box<dyn std::error::Error>> {
    tonic_build::configure()
        .out_dir("src/")
        .build_client(false)
        .compile(&["../../../protocol/server.proto"], &["../../../"])?;
    tonic_build::configure()
        .out_dir("src/")
        .build_client(false)
        .compile(&["../../../protocol/devices/device.proto"], &["../../../"])?;
    Ok(())
}
