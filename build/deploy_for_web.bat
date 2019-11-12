@echo off
setlocal
pushd "%~dp0"

rem Kuin2.kn ->[Kuin1.exe]-> Kuin2.exe
.\kuincl.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin.exe" -s "%~dp0./sys/" -e cui

rem ---------------------------------------------------------------------------

rem Kuin2.kn ->[Kuin2.exe]-> Kuin2.js
copy /Y "..\src\compiler\*.kn" "..\src\compiler\res\"
xcopy /s /e /q /i /y "..\src\compiler\cpp" "..\src\compiler\res\cpp"
xcopy /s /e /q /i /y "..\src\compiler\web" "..\src\compiler\res\web"
.\output\kuin.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0deploy/kuin" -s "%~dp0../src/compiler/res/sys/" -e web -x static

pause

popd
