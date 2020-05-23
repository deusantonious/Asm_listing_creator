#include "Directives.h"

Directives::Directives()
{
     List.push_back(Directive("END", "��������� ��������� ��������"));
     List.push_back(Directive(".DATA", ""));
     List.push_back(Directive(".CODE", ""));
     List.push_back(Directive("DB", "��������� ���� ����� 1-� ���"));
     List.push_back(Directive("DW", "��������� ���� ����� 2-� ���"));
     List.push_back(Directive("DD", "��������� ���� ����� 3-� ���"));
     List.push_back(Directive("BYTE", "���������, 4-� ���"));
     List.push_back(Directive("PTR", "��������� ��������� ���������� ����"));
}

std::string Directives::GetDescriptionFromName(std::string name)
{
    for (auto i : List)
        if (i._name == name) return i._description;
    return std::string();
}
