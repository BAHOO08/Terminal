// st_mashine_release.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Terminal.h"
#include <string>


//mapping["left"] = LEFT;
#include <map>
int main()
{

	Terminal terminal;
	//terminal.COM.OpenCOMport();
	//terminal.COM.SettingCOM();
/*	terminal.ReInit();
	terminal.GetHelp();
	terminal.ComPortSeted();
	terminal.ReInit();*/
    //std::cout << "Hello World!\n";



	std::string cmd;
	while (true)
	{
		std::getline(std::cin, cmd); // полностью извлекаем строку в переменную myName

		//Костыль
		auto tmp = terminal.GetMapList();
		auto t = tmp.end();
		auto t2 = tmp.find(cmd);
		//if (terminal.GetMapList().find(cmd) != terminal.GetMapList().end())
		if (t2 != t) // Конец костыля
		{
			switch (terminal.GetMapList()[cmd])
			{
			case Terminal::CMD_e::HELP_cmd:
				terminal.GetHelp();
				break;
			case Terminal::CMD_e::YES:
				terminal.AgreeAction();
				break;
			case Terminal::CMD_e::WRITE_IK_cmd:
				terminal.ChangeState(Terminal::State::WRITE_IK_STATE);
				break;
			default:
				break;
			}
		}
	}
}


/*
unsigned parts[4] = get_float_from_serial();
float* value = (float*)parts;
*/