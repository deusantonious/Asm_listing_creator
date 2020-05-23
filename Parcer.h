#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
class Parcer
{
public:
	Parcer(){}
	Parcer(const std::string& fname) : _fname(fname) {}
private:
	std::string _fname;
	std::vector<std::string> parce();
};

