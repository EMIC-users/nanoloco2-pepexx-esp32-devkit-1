@echo off
setlocal

set MSYSTEM=
set IDF_PATH=C:\Espressif\frameworks\esp-idf-v5.1
set IDF_TOOLS_PATH=C:\Espressif
set PATH=C:\Espressif\python_env\idf5.1_py3.11_env\Scripts;C:\Espressif\tools\xtensa-esp32-elf\esp-12.2.0_20230208\xtensa-esp32-elf\bin;C:\Espressif\tools\cmake\3.24.0\bin;C:\Espressif\tools\ninja\1.10.2;C:\Espressif\tools\idf-git\2.39.2\cmd;C:\Windows\system32;C:\Windows

python.exe %IDF_PATH%\tools\idf.py build

endlocal

