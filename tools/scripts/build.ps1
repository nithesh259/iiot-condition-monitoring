Write-Host "====================================="
Write-Host " Building Firmware"
Write-Host "====================================="
Write-Host ""

cd ../../firmware

pio run

Write-Host ""
Write-Host "Build Finished."