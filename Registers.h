#pragma once
#include <string>
#include <list>
class Registers
{
public:
	Registers();
	int sizeFromName(std::string name);
private:
	struct Register
	{
		std::string _name;
		int _size;
		Register(){}
		Register(std::string name, int size) : _name(name), _size(size){}
	};
	std::list<Register> list;
};

