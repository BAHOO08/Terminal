#include "TerminalStates.h"
#include "ComPort.h"
#include <Windows.h>
TerminalStates::TerminalStates()
{
}

TerminalStates::~TerminalStates()
{
}

void TerminalStates::ComPortSeted(Terminal * p)
{
}

void TerminalStates::AgreeAction(Terminal * p)
{
}

/*void TerminalStates::GetHelp(Terminal * p)
{
}*/

void TerminalStates::GoBack(Terminal * p)
{
}

/*void TerminalStates::Close(Terminal * p)
{
}*/

void TerminalStates::ReInit(Terminal * p)
{
	std::cout << "Reinit from InitComportState" << std::endl;
	p->ChangeState(Terminal::State::INIT_COMPORT);
//	p->_comport.OpenCOMport();
}

