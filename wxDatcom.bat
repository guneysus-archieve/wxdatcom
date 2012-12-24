@ECHO OFF
echo %~dp0

SET PATH=%windir%\system32;%~dp0bin;%~dp0scripts;%~dp0cygwin\bin;%~dp0editor;%~dp0gnuplot\bin;

echo ---------------------------------------------
echo PATH 
echo %path%
echo ---------------------------------------------



bash -c ./wxDatcom.exe
REM wxDatcom_debug.exe