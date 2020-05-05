@echo off
setlocal
pushd "%~dp0"

rem Kuin2.kn ->[Kuin1.exe]-> Kuin2.exe
.\kuincl.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin.exe" -s "%~dp0./sys/" -e cui

rem ---------------------------------------------------------------------------

rem Kuin2.kn ->[Kuin2.exe]-> Kuin2.cpp
.\output\kuin.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin_cpp" -s "%~dp0../src/compiler/res/sys/" -e cpp -r

rem Kuin2.cpp ->[Visual Studio]->Kuin2.exe
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0output/kuin_cpp.sln" /t:clean;rebuild /p:Configuration="Release" /p:Platform="x64" /m
rd /s /q "%~dp0deploy_exe"
mkdir "%~dp0deploy_exe"
copy /Y .\output\x64\Release\kuin_cpp.exe "%~dp0deploy_exe\kuin.exe"
xcopy /s /e /q /i /y "..\src\compiler\res\sys" "%~dp0deploy_exe\sys"
pause

popd
