@echo off
setlocal
pushd "%~dp0"

rem Kuin2.kn ->[Kuin1.exe]-> Kuin2.exe
.\kuincl.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin.exe" -s "%~dp0./sys/" -e cui

rem ---------------------------------------------------------------------------

.\output\kuin.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/exe_output/kuin_exe" -s "%~dp0../src/compiler/res/sys/" -e exe

.\output\exe_output\kuin_exe.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/exe_output/kuin_exe2" -s "%~dp0../src/compiler/res/sys/" -e exe

.\output\exe_output\kuin_exe2.exe -i "%~dp0test_data/test.kn" -o "%~dp0output/exe_output/test_kuin_exe" -s "%~dp0../src/compiler/res/sys/" -e exe

.\output\exe_output\test_kuin_exe.exe > .\output\test_kuin_exe_output.txt
fc /N "%~dp0output\test_kuin_exe_output.txt" "%~dp0output\test_kuin_exe_correct.txt"
pause

popd
