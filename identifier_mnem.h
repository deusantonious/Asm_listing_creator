#pragma once
#include <vector>
#include "lexeme.h"
class identifier_mnem :
	public lexeme
{
public:
	enum mnem
	{
		NOTHING,
		MEM,
		REG,
		IMM
	};
	identifier_mnem(std::string text) : lexeme(text) {}
	~identifier_mnem() {
		for (auto i : _operand1)
			delete i;
		for (auto i : _operand2)
			delete i;
	}
	void add_first(lexeme* operand) { _operand1.push_back(operand); }
	void add_second(lexeme* operand) { _operand2.push_back(operand); }
	std::string description() override { return "mnem"; }
private:
	std::vector<lexeme*> _operand1;
	std::vector<lexeme*> _operand2;
};

