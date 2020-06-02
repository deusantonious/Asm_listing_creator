#pragma once
#include <string>
#include "lexeme.h"
class Register :
	public lexeme
{
public:
	Register(std::string name, std::string size)  :lexeme(name), _size(size) {  }
	std::string size() { return _size; }
	std::string description() override { return "Register"; };
private:
	std::string _size;
};

