@echo off

gcc -Wall API.c TablePointer.c main.c -o myprogram

myprogram

del myprogram.exe
pause
