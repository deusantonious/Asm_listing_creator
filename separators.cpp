#include "separators.h"

separators::separators()
{
	Array.push_back('+');
	Array.push_back('*');
	Array.push_back('/');
	Array.push_back('[');
	Array.push_back(']');
	Array.push_back(':');
	Array.push_back(',');
	Array.push_back(';');
}

bool separators::isSeparator(const char ch)
{
	for (auto i : Array)
		if (i == ch) return true;
	return false;
}
