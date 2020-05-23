#include "commands.h"

commands::commands()
{
	List.push_front(command("LAHF"));
	List.push_front(command("JZ"));
	List.push_front(command("DEC",MEM));
	List.push_front(command("IMUL", REG));
	List.push_front(command("CMP", REG, REG));
	List.push_front(command("MOV", REG, IMM));
	List.push_front(command("XCHG", REG, MEM));
	List.push_front(command("MOVZX", MEM, REG));
	List.push_front(command("AND", REG, IMM));
	List.push_front(command("ADD", MEM, IMM));
}

std::pair<int, int> commands::GetOperandsTypeFromName(std::string name)
{
	for (auto i : List)
		if (i._name == name) return std::pair<int, int>(i._operand1, i._operand2);
	return std::pair<int, int>(-1,-1);
}
