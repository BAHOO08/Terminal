#pragma once
#include <iostream>
#include <Windows.h>
//#include "InitCOMportState.h"
//#include "TerminalStates.h"
class TerminalStates;
#include <vector>
/*!
@brief State mashine of terminal program. Containe the State pattern
*/
class Terminal
{
public:
	enum State
	{
		INIT_COMPORT,
		PREPEARED,
		HELP,
		DATA_WORK
	};

	Terminal();
	virtual ~Terminal();

	//State mashine Fnct

	void ReInit();
	void ComPortSeted();
	void GetHelp();
	void GoBack();
	void Close();
	void AgreeAction();
	void ChangeState(State state);
	void SendCmd(std::vector<char>&& data);


	HANDLE hSerial;
	DWORD dwSize;// = sizeof(data);
	DWORD dwBytesWritten;
	LPOVERLAPPED ov;
	BOOL iRet;
private:
	//ComPort *_comport;
	TerminalStates * _state;


};

