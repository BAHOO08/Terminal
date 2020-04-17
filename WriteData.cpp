#include "WriteData.h"

WriteData::WriteData()
{
	std::cout << "Choose parameters. Write to console one of these:" << std::endl;
	std::cout << "<ik>, <uk>"<< std::endl;

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
