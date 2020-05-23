#pragma once
#include <vector>
class separators
{
private:
	std::vector<char> Array;
public:
	separators();
	bool isSeparator(const char ch);
};

