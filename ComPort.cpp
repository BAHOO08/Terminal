#include "ComPort.h"
#include <iostream>
ComPort::ComPort()
{
}

void ComPort::Write()
{
	CloseHandle(hSerial);
}

void ComPort::SettingCOM()
{
	DCB dcbSerialParams = { 0 };
	dcbSerialParams.DCBlength = sizeof(dcbSerialParams);
	if (!GetCommState(hSerial, &dcbSerialParams))
	{
		std::cout << "getting state error\n";
	}


	int boudrate;

	std::cout << "Chose your boudrate" << std::endl;
	while (true)
	{
		std::cin >> boudrate;
		//cin >> boudrate;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32727, '\n');

			std::cout << "your form uncorrected" << std::endl;
		}
		else
		{
			//cout << "COM port seted on " << boudrate << endl;
			break;
		}
	}

	std::cout << "Seted boudrate " << boudrate << std::endl;

	dcbSerialParams.BaudRate = boudrate;//CBR_9600;//CBR_256000;// было 9600
	dcbSerialParams.ByteSize = 8;
	dcbSerialParams.StopBits = ONESTOPBIT;
	dcbSerialParams.Parity = NOPARITY;
	if (!SetCommState(hSerial, &dcbSerialParams))
	{
		std::cout << "error setting serial port state\n";
	}
}

void ComPort::OpenCOMport()
{
	std::cout << "Hello!! Write number of COM port(only number)" << std::endl;

	LPCTSTR dataCOMs[10] =
	{
		L"COM0", L"COM1", L"COM2",L"COM3",L"COM4",L"COM5",L"COM6",L"COM7",L"COM8",L"COM9"
	};

	while (true)
	{
		int comport;

		std::cin >> comport;
		for (; comport > sizeof(dataCOMs) || comport == 0; std::cin >> comport)
		{
			// Check correct form
			if (std::cin.failbit)
			{
				std::cin.clear();
				std::cin.ignore(32727, '\n');
			}

			std::cout << "This COM port not support" << std::endl;
		}

		LPCTSTR sPortName = dataCOMs[comport];

		hSerial = CreateFile(sPortName, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);

		if (hSerial == INVALID_HANDLE_VALUE)
		{
			if (GetLastError() == ERROR_FILE_NOT_FOUND)
			{
				std::cout << "This comport not exist. Try again\n";
			}
			else
			{
				std::cout << "some other error occurred.\n";
			}
		}
		else
		{
			std::cout << "You connected to COM " << comport << std::endl;
			break;
		}
	}
}

ComPort::~ComPort()
{
}
