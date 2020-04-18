#pragma once
#include "TerminalStates.h"
#include <iostream>
#include <map>
#include <string>
#include "dataMapping.h"
class WriteData :
	public TerminalStates,
	public DataMapping
{
public:

	WriteData(Terminal*);
	virtual ~WriteData();
	virtual void ComPortSeted(Terminal *);
	virtual void AgreeAction(Terminal *p);
	virtual void GoBack(Terminal *);
private:

};

