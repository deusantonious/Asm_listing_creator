#pragma once
#include <string>
#include "lexeme.h"
class one_symbol :
	public lexeme
{
public:
	one_symbol(std::string text) : lexeme(text){}
};

