@echo off
@rem ���ļ���gcc����.cԴ�ļ�(���Ż�)(Windows�ַ���ΪGBK)

cd D:\code\C\�����﷨
gcc ����_�������.c -o ����_�������.exe -Wall -g -static-libgcc -std=c11 -fexec-charset=GBK -finput-charset=UTF-8
pause