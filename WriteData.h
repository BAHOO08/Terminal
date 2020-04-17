#pragma once
#include "TerminalStates.h"
#include <iostream>
class WriteData :
	public TerminalStates
{
public:
	WriteData();
	virtual ~WriteData();
	virtual void ComPortSeted(Terminal *);
	virtual void AgreeAction(Terminal *p);
	virtual void GoBack(Terminal *);
};

