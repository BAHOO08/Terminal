#pragma once
#include "TerminalStates.h"
#include "Terminal.h"
class PrepearedState :
	public TerminalStates
{
public:
	PrepearedState(Terminal*);
	virtual	~PrepearedState();
	//virtual void ReInit(Terminal *);

	virtual void AgreeAction(Terminal* p);
	virtual void ComPortSeted(Terminal *);
	virtual void GoBack(Terminal *);
};

