#pragma once

#include <Windows.h>
#include <iostream>
class ComPort
{
public:
	ComPort();
//	void WorkCOM();
//	void Read();
	void Write();
	void SettingCOM();
	void OpenCOMport();
	~ComPort();
private:
	HANDLE hSerial;
	DWORD dwSize;// = sizeof(data);
	DWORD dwBytesWritten;
	LPOVERLAPPED ov;
	BOOL iRet;
};

