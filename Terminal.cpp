#include "Terminal.h"
#include "InitCOMportState.h"
#include "TerminalStates.h"
#include "PrepearedState.h"
#include "WriteIkState.h"
Terminal::Terminal():_state(new InitCOMportState(this))
{
	mapping["-h"] = HELP_cmd;
	mapping["-r"] = READ;
	mapping["y"] = YES;
	mapping["-r ik"] = READ_IK_cmd;
	mapping["-w ik"] = WRITE_IK_cmd;
}

Terminal::~Terminal()
{
	CloseHandle(hSerial);
	delete _state;
}

void Terminal::ReInit()
{
	_state->ReInit(this);
}

void Terminal::ComPortSeted()
{
	_state->ComPortSeted(this);
}

void Terminal::GetHelp()
{
	//_state->GetHelp(this);
	std::cout << "==========================================" << std::endl;
	std::cout << "    Help menu. It is list of command		" << std::endl;
	std::cout << "==========================================" << std::endl;
	std::cout << "-h		- help							" << std::endl;
	std::cout << "-r name	- read data name				" << std::endl;
	std::cout << "-w name	- w data name					" << std::endl;
	std::cout << "-ld		- data list						" << std::endl;
	std::cout << "-exit		- exit							" << std::endl;
	std::cout << "-ocp		- open com port					" << std::endl;
	std::cout << "-scp		- setting com port				" << std::endl;
	std::cout << "-cprinit	- com port reinit				" << std::endl;
	std::cout << "==========================================" << std::endl;
}

void Terminal::GoBack()
{
	_state->GoBack(this);
}

void Terminal::Close()
{
	//_state->Close(this);
	std::cout << "Close" << std::endl;
}

void Terminal::AgreeAction()
{
	_state->AgreeAction(this);
}

void Terminal::ChangeState(enum Terminal::State state)
{
	delete _state;
	switch (state)
	{
	case Terminal::INIT_COMPORT:
		_state = new InitCOMportState(this);
		break;
	case Terminal::PREPEARED:
		_state = new PrepearedState(this);
		break;
	case Terminal::HELP:
		break;
	case Terminal::DATA_WORK:
		break;
	case Terminal::WRITE_IK_STATE:
		_state = new WriteIkState(this);
	default:
		break;
	}
}

void Terminal::SendCmd(std::vector<char>&& data)
{
	/*using namespace std;
	std::string data2;*/
	std::cout << "Send cmd" << std::endl;
}

void Terminal::SendData(const float& data)
{


	/*char data[] = "Hello from C++";
	dwSize = sizeof(data);
	dwBytesWritten;
	ov;

	BOOL iRet = WriteFile(hSerial, data, dwSize, &dwBytesWritten, NULL);*/
}

std::map<std::string, Terminal::CMD_e> Terminal::GetMapList() const
{
	return mapping;
}


