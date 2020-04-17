#include "PrepearedState.h"
#include <iostream>
PrepearedState::PrepearedState()
{
	std::cout << "Ok. You COMport have seted. If you want, you can send command" <<
		"for wokring with devises (-h command list)" << std::endl;
}

void PrepearedState::ComPortSeted(Terminal *)
{
	std::cout << "Error code Pr1" << std::endl;
}

void PrepearedState::GoBack(Terminal *p)
{
	p->ChangeState(Terminal::State::INIT_COMPORT);
}

/*void PrepearedState::ReInit(Terminal *p)
{

}*/
