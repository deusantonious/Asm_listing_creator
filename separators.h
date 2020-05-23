#pragma once
#include <list>
class separators
{
private:
	std::list<char> List;
public:
	separators();
	bool isSeparator(const char ch);
};

