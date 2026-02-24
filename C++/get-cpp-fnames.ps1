
$root = "./../utility"
cd $root

# get folder paths under current-dir
$folders = Get-ChildItem -Path "./" -Directory -Force:$false

foreach ($folder in $folders) {
    if (Test-Path $folder) {
        $cppFiles = Get-ChildItem -Path $folder -Filter *.cpp -Recurse -File 
        #if ($cppFile.length -gt 0) {Write-Host  "$folder/$cppFile"}
		foreach ($cpp in $cppFiles) {
			Write-Host  "$folder/$cpp"
		}
    } 
}
