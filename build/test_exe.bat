@echo off
setlocal
pushd "%~dp0"

.\kuincl.exe -i "%~dp0test_data/test_exe.kn" -o "%~dp0output/test_exe_correct.exe" -s "%~dp0./sys/" -e cui

.\kuincl.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin.exe" -s "%~dp0./sys/" -e cui

.\output\kuin.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin_cpp" -s "%~dp0../src/compiler/res/sys/" -e cpp

"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0output/kuin_cpp.sln" /t:clean;rebuild /p:Configuration="Release" /p:Platform="x64" /m

.\output\x64\Release\kuin_cpp.exe -i "%~dp0test_data/test_exe.kn" -o "%~dp0output/test_exe" -s "%~dp0../src/compiler/res/sys/" -e exe

rem .\output\kuin.exe -i "%~dp0test_data/test_exe.kn" -o "%~dp0output/test_exe.exe" -s "%~dp0../src/compiler/res/sys/" -e exe

pause

popd
