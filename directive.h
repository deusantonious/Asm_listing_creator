#pragma once
#include "lexeme.h"
class directive :
	public lexeme
{
public:
	directive(std::string text, std::string description) :lexeme(text), _description(description) {}
	std::string description() { return _description; }
private:
	std::string _description;
	std::string type;
};

