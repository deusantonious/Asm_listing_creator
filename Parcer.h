#pragma once
#include <string>
#include <list>
#include <vector>
#include <fstream>
#include <iostream>

#include "separators.h"
class Parcer
{
public:
	Parcer(){}
	Parcer(const std::string& fname) : _fname(fname) {}
	std::list<std::vector<std::string>> parce();
private:
	std::string _fname;

};

