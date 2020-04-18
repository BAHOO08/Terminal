#include "PrepearedState.h"
#include <iostream>

#include <string>
/*PrepearedState::PrepearedState()
{
	std::cout << "Ok. You COMport have seted. If you want, you can send command" <<
		"for wokring with devises (-h command list)" << std::endl;
}
*/
PrepearedState::PrepearedState(Terminal*p)
{
	std::cout << "Your com port have prepeared. You can send cmd for working with devise (-h command list)" << std::endl;

	/*while (true)
	{
		std::string cmd;
		std::cin.ignore(32767, '\n');
		std::getline(std::cin, cmd); // полностью извлекаем строку в переменную myName
		auto tmp = p->GetMapList();
		auto t = tmp.end();
		auto t2 = tmp.find(cmd);
		if (t2 != t)
		{
			switch (p->GetMapList()[cmd])
			{
			case Terminal::CMD_e::HELP_cmd:
				p->GetHelp();
				break;
			case Terminal::CMD_e::WRITE_IK_cmd:
				p->ChangeState(Terminal::State::WRITE_IK_STATE);
				break;
			default:
				std::cout << "Uncnown Command" << std::endl;
				break;
			}
		}
		else
		{
			std::cout << "www" << std::endl;
		}
	}*/

}

PrepearedState::~PrepearedState()
{
}

void PrepearedState::AgreeAction(Terminal* p)
{
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
