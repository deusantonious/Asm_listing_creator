#pragma once
#include <list>
#include <string>
#include <utility>
class commands
{
private:
	enum mnem
	{
		NOTHING,
		MEM,
		REG,
		IMM
	};
	struct command
	{
		std::string _name;
		int _operand1;
		int _operand2;
		command(std::string name, int operand1, int operand2) : _name(name), _operand1(operand1), _operand2(operand2) {}
		command(std::string name, int operand) : _name(name), _operand1(operand) { _operand2 = NOTHING; }
		command(std::string name) : _name(name) { _operand1 = _operand2 = NOTHING; }
	};
	std::list<command> List;
public:
	commands();
	std::pair<int,int> GetOperandsTypeFromName(std::string name);
};

