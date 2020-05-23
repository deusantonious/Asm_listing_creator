#include "Parcer.h"

std::vector<std::string> Parcer::parce()
{
	std::ifstream input;
	try
	{
		input.open(_fname);
	}
	catch (const std::exception & ex)
	{
		throw ex;
	}
	return std::vector<std::string>();
}
