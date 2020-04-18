#include "WriteData.h"
#include <iostream>
WriteData::WriteData(Terminal *p)
{

	std::cout << "Choose parameters. Write to console one of these:" << std::endl;
	std::cout << "<ik>, <uk>"<< std::endl;

	std::string cmd;
	while (true)
	{
		std::getline(std::cin, cmd); // полностью извлекаем строку в переменную myName

		if (CheckExistingElement(cmd))
		{
			switch (GetMapping()[cmd])
			{
			case WriteData::CMD_e::IK:
				p->ChangeState(Terminal::State::WRITE_IK_STATE);
				break;
			case WriteData::CMD_e::UK:
				break;
			default:
				std::cout << "Uncnoun command" << std::endl;
				break;
			}
		}
	}
}

WriteData::~WriteData()
{
}

void WriteData::ComPortSeted(Terminal *)
{
	std::cout << "Error. W1" << std::endl;
}

void WriteData::AgreeAction(Terminal * p)
{
}

void WriteData::GoBack(Terminal *)
{
}
