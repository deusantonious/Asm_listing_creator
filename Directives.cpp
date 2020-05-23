#include "Directives.h"

Directives::Directives()
{
     List.push_back(Directive("END", "Директива закінчення програми"));
     List.push_back(Directive(".DATA", ""));
     List.push_back(Directive(".CODE", ""));
     List.push_back(Directive("DB", "Директива типу даних 1-й тип"));
     List.push_back(Directive("DW", "Директива типу даних 2-й тип"));
     List.push_back(Directive("DD", "Директива типу даних 3-й тип"));
     List.push_back(Directive("BYTE", "Директива, 4-й тип"));
     List.push_back(Directive("PTR", "Директива оператора визначення типу"));
}

std::string Directives::GetDescriptionFromName(std::string name)
{
    for (auto i : List)
        if (i._name == name) return i._description;
    return std::string();
}
