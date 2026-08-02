Write-Host "====================================="
Write-Host " IIoT Firmware Flash Utility"
Write-Host "====================================="
Write-Host ""

pio run --target upload

Write-Host ""
Write-Host "Firmware upload completed."