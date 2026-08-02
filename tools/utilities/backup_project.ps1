$Date = Get-Date -Format "yyyy-MM-dd_HH-mm"

$Destination = "../../backups"

if (!(Test-Path $Destination))
{
    New-Item -ItemType Directory -Path $Destination
}

Compress-Archive `
Path ../../* `
DestinationPath "$Destination/iiot_backup_$Date.zip"

Write-Host "Backup Created Successfully."