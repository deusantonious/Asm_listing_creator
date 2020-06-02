#include "lex_table.h"

Register lex_table::isRegister(std::string txt)
{
	if (txt == "EAX") return(Register(txt, "32"));
	if (txt == "EBX") return(Register(txt, "32"));
	if (txt == "ECX") return(Register(txt, "32"));
	if (txt == "EDX") return(Register(txt, "32"));
	if (txt == "ESP") return(Register(txt, "32"));
	if (txt == "EBP") return(Register(txt, "32"));
	if (txt == "ESI") return(Register(txt, "32"));
	if (txt == "EDI") return(Register(txt, "32"));
	if (txt == "ECS") return(Register(txt, "32"));
	if (txt == "DS") return(Register(txt, "32"));
	if (txt == "SS") return(Register(txt, "32"));
	if (txt == "ES") return(Register(txt, "32"));
	if (txt == "AH") return(Register(txt, "8"));
	if (txt == "AL") return(Register(txt, "8"));
	if (txt == "BH") return(Register(txt, "8"));
	if (txt == "BL") return(Register(txt, "8"));
	if (txt == "CH") return(Register(txt, "8"));
	if (txt == "CL") return(Register(txt, "8"));
	if (txt == "DH") return(Register(txt, "8"));
	if (txt == "DL") return(Register(txt, "8"));
	return Register("", "0");
}

directive lex_table::isDirective(std::string txt)
{
	if (txt == "END") return directive(txt, "directive");
	if (txt == "MODEL TINY") return directive(txt, "directive");
	if (txt == ".DATA") return directive(txt, "directive");
	if (txt == ".CODE") return directive(txt, "directive");
	if (txt == "DB") return directive(txt, "directive DB");
	if (txt == "DW") return directive(txt, "directive DW");
	if (txt == "DD") return directive(txt, "directive DD");
	return directive("0","0");
}

identifier_mnem lex_table::isCommand(std::vector<std::string> lexemes)
{
	int pos = 0;
	if (lexemes.at(1) == ":") pos = 2;
	if (lexemes.at(pos) == "LAHF") return identifier_mnem("LAHF");
	if (lexemes.at(pos) == "DEC") {
		identifier_mnem res("DEC");
		int i = pos + 1;
		while (i < lexemes.size()) {
			if (lexemes.at([0] >= '0' && i[0] <= '9' || i[0] == '-') {
				_lexemes.push_back(new const_number(i));
				continue;
			}
			//if const text
			if (i[0] == '"' && i.back() == '"') {
				_lexemes.push_back(new const_text(i));
				continue;
			}
			Register reg = isRegister(i);
			if (reg.size() != "0") {
				_lexemes.push_back(new Register(reg));
				continue;
			}
		}

		for (int i = pos + 1; i < lexemes.size(); i++);
			it++;
		for()
	}
	}return identifier_mnem("LAHF");
	return identifier_mnem("");
}

lex_table::lex_table(std::vector<std::string> lexemes)
{
	if (lexemes.at(1) == ":") {
		if (lexemes.size() < 2) {
			return;
		}
	}
	//here is command mb

	for (auto i : lexemes) {
		//if number
		if (i[0] >= '0' && i[0] <= '9' || i[0] == '-') {
			_lexemes.push_back(new const_number(i));
			continue;
		}
		//if const text
		if (i[0] == '"' && i.back() == '"') {
			_lexemes.push_back(new const_text(i));
			continue;
		}
		Register reg  = isRegister(i);
		if (reg.size() != "0") {
			_lexemes.push_back(new Register(reg));
			continue;
		}
		directive dir = isDirective(i);
		if (dir.description() != "0") {
			_lexemes.push_back(new directive(dir));
			continue;
		}
	}
}

lex_table::~lex_table()
{
	for (auto i : _lexemes) {
		delete i;
	}
}

void lex_table::print()
{
	for (auto i : _lexemes) {
		std::cout << i->description() << " ";
	}
	std::cout << "\n";
}
