#include "WriteIkState.h"
#include <iostream>
#include <cassert>
WriteIkState::WriteIkState(Terminal *p)
{
	std::cout << "Do you want to write the current coefficient(ik)? <y>,<n>" << std::endl;
}

WriteIkState::~WriteIkState()
{
}

void WriteIkState::ComPortSeted(Terminal*)
{
	//assert(true && "Unused action WriteIkState");
}

void WriteIkState::AgreeAction(Terminal* p)
{

}

void WriteIkState::GoBack(Terminal*)
{
}
