#pragma once
#include <string>
class lexeme
{
protected:
	std::string _text;
	std::string _description;
public:
	virtual std::string description() = 0;
	lexeme(std::string text) : _text(text) {}
};

