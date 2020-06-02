#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "directive.h"
#include "Register.h"
#include "one_symbol.h"
#include "identifier_mnem.h"
#include "identifier_user.h"
#include "const_number.h"
#include "const_text.h"
#include "lexeme.h"



class lex_table
{
private:
	std::vector<lexeme*> _lexemes;
	std::vector<const std::string*> types;
	Register isRegister(std::string txt);
	directive isDirective(std::string txt);
	identifier_mnem isCommand(std::vector<std::string> lexemes);
public:
	lex_table(){}
	lex_table(std::vector<std::string> lexemes);
	~lex_table();
	void print();
};

