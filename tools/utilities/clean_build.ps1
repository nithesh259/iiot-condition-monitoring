Write-Host "Cleaning PlatformIO Build..."

cd ../../firmware

pio run --target clean

Write-Host "Build Cleaned Successfully."