@echo off
setlocal
pushd "%~dp0"

.\deploy_exe\kuin.exe -i "%~dp0../src/kuin_editor/kuin_editor.kn" -o "%~dp0deploy_exe/editor" -s "%~dp0deploy_exe/sys/" -e exe -r

pause

popd
