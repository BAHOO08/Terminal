#pragma once
#include "TerminalStates.h"
#include "Terminal.h"

#include "ComPort.h"

class InitCOMportState :
	public TerminalStates
{
public:
	InitCOMportState();
	virtual	~InitCOMportState();

	//virtual void ReInit(Terminal *);
	virtual void ComPortSeted(Terminal *);
	//virtual void GetHelp(Terminal *) {}
	virtual void AgreeAction(Terminal *p);
	virtual void GoBack(Terminal *);
	//virtual void Close(Terminal *) {}
};
 
