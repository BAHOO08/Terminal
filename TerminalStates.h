#pragma once
#include "Terminal.h"

class TerminalStates
{
public:
	TerminalStates();
	virtual ~TerminalStates();
	virtual void ComPortSeted(Terminal *p);
	virtual void AgreeAction(Terminal *p);
	//virtual void GetHelp(Terminal *p);
	virtual void GoBack(Terminal *p);
	//virtual void Close(Terminal *p);
	void ReInit(Terminal *p);
};

