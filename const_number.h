#pragma once
#include <string>
#include "lexeme.h"
class const_number :
	public lexeme
{
public:
	std::string description() override { return "const_number"; }
	const_number(std::string text):lexeme(text){}
};

