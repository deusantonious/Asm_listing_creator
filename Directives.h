#pragma once
#include <list>
#include <string>
class Directives
{
private:
	struct Directive
	{
		std::string _name;
		std::string _description;
		Directive(std::string name, std::string description) : _name(name), _description(description){}
	};
	std::list<Directive> List;
public:
	Directives();
	std::string GetDescriptionFromName(std::string name);
};

