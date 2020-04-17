#pragma once
#include "TerminalStates.h"
class PrepearedState :
	public TerminalStates
{
public:
	PrepearedState();
	//virtual void ReInit(Terminal *);
	virtual void ComPortSeted(Terminal *);
	virtual void GoBack(Terminal *);
};

