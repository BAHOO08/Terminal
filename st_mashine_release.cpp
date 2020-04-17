// st_mashine_release.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Terminal.h"
#include <string>
#include <map>
enum CMD_e
{
	HELP,
	BACK,
	READ,
	YES,
	NO
};
std::map <std::string, CMD_e> mapping;

//mapping["left"] = LEFT;

int main()
{
	mapping["-h"] = HELP;
	mapping["-r"] = READ;
	mapping["y"] = YES;
	Terminal terminal;
	//terminal.COM.OpenCOMport();
	//terminal.COM.SettingCOM();
/*	terminal.ReInit();
	terminal.GetHelp();
	terminal.ComPortSeted();
	terminal.ReInit();*/
    //std::cout << "Hello World!\n";
	while (true)
	{
		std::string cmd;
		std::getline(std::cin, cmd); // полностью извлекаем строку в переменную myName
		if (mapping.find(cmd) != mapping.end())
		{
			switch (mapping[cmd])
			{
			case CMD_e::HELP: 
				terminal.GetHelp();
				break;
			case CMD_e::YES:
				terminal.AgreeAction();
				break;
			default:
				break;
			}
		}
	}
}
