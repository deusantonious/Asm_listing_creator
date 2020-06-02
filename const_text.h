#pragma once
#include <string>
#include "lexeme.h"
class const_text
	:public lexeme
{
private:
public:
	std::string description() override { return "text constant"; }
	const_text(std::string text) : lexeme(text) { _text.pop_back(); _text.erase(0, 1); }
};

