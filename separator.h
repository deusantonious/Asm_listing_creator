#pragma once
#include <string>
#include "one_symbol.h"
class separator :
	public one_symbol
{
private:
public:
	separator(std::string text) : one_symbol(text){}
};

