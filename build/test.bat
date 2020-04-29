@echo off
setlocal
pushd "%~dp0"

rem Kuin2.kn ->[Kuin1.exe]-> Kuin2.exe
.\kuincl.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin.exe" -s "%~dp0./sys/" -e cui

rem ---------------------------------------------------------------------------

rem Kuin2.kn ->[Kuin2.exe]-> Kuin2.cpp
.\output\kuin.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin_cpp" -s "%~dp0../src/compiler/res/sys/" -e cpp

rem Kuin2.cpp ->[Visual Studio]->Kuin2.exe
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0output/kuin_cpp.sln" /t:clean;rebuild /p:Configuration="Release" /p:Platform="x64" /m

rem Kuin2.kn ->[Kuin2.exe]-> Kuin2.cpp
.\output\x64\Release\kuin_cpp.exe -i "%~dp0../src/compiler/main.kn" -o "%~dp0output/kuin_cpp2" -s "%~dp0../src/compiler/res/sys/" -e cpp

rem Compare Kuin2.cpp
fc /N "%~dp0output\kuin_cpp.cpp" "%~dp0output\kuin_cpp2.cpp"
pause

rem Test Kuin2.exe
.\output\x64\Release\kuin_cpp.exe -i "%~dp0test_data/test.kn" -o "%~dp0output/test_kuin_cpp" -s "%~dp0../src/compiler/res/sys/" -e cpp
"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0output/test_kuin_cpp.sln" /t:clean;rebuild /p:Configuration="Release" /p:Platform="x64" /m
.\output\x64\Release\test_kuin_cpp.exe > .\output\test_kuin_cpp_output.txt
fc /N "%~dp0output\test_kuin_cpp_output.txt" "%~dp0output\test_kuin_cpp_correct.txt"
pause
popd
