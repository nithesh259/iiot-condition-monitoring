Write-Host "====================================="
Write-Host " Release Build"
Write-Host "====================================="
Write-Host ""

git add .

git commit -m "Release Build"

git push

Write-Host ""
Write-Host "Release Completed."