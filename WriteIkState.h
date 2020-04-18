#pragma once
#include "TerminalStates.h"
class WriteIkState :
	public TerminalStates
{
public:
	WriteIkState(Terminal*);
	virtual	~WriteIkState();

	virtual void ComPortSeted(Terminal*);
	virtual void AgreeAction(Terminal* p);
	virtual void GoBack(Terminal*);
};

