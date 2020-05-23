#include "separators.h"

separators::separators()
{
	List.push_back('+');
	List.push_back('*');
	List.push_back('/');
	List.push_back('[');
	List.push_back(']');
	List.push_back(':');
	List.push_back(',');
	List.push_back(';');
}

bool separators::isSeparator(const char ch)
{
	for (auto i : List)
		if (i == ch) return true;
	return false;
}
