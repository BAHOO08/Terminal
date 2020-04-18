/*****************************************************************//**
 * \file   Terminal.h
 * \brief  Main class of State pattern for terminal
 * 
 * \author BAHOO
 * \date   April 2020
***********************************************************************/
#pragma once
#include <iostream>
#include <Windows.h>
//#include "InitCOMportState.h"
//#include "TerminalStates.h"
class TerminalStates;
#include <vector>
#include <map>
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
		DATA_WORK,
		WRITE_IK_STATE
	};


	enum CMD_e
	{
		HELP_cmd,
		BACK,
		READ,
		YES,
		NO,
		READ_IK_cmd,
		WRITE_IK_cmd
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
	void ChangeState(enum Terminal::State state);
	void SendCmd(std::vector<char>&& data);
	

	void SendData(const float& data);

	HANDLE hSerial;
	DWORD dwSize;// = sizeof(data);
	DWORD dwBytesWritten;
	LPOVERLAPPED ov;
	BOOL iRet;

	std::map <std::string, Terminal::CMD_e> GetMapList() const;
private:

	std::map <std::string, CMD_e> mapping;
	//ComPort *_comport;
	TerminalStates * _state;


};

