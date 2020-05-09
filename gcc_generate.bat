@echo off
@rem 此文件用gcc编译.c源文件(无优化)(Windows字符集为GBK)

cd D:\code\C\基础语法
gcc 数组_反序输出.c -o 数组_反序输出.exe -Wall -g -static-libgcc -std=c11 -fexec-charset=GBK -finput-charset=UTF-8
pause