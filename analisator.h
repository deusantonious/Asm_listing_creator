#pragma once
#include <vector>
#include <list>
#include <string>
#include <iterator>
#include "separators.h"
#include "Registers.h"
class analisator
{
public:
	analisator(std::list<std::vector<std::string>> programText) : _programText(programText){}
	void lexical_analis();
	void syntax_analis();
private:
	std::list<std::vector<std::string>> _programText;
};

