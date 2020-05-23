#include<list>
#include<vector>
#include<string>
#include<fstream>
#include "Parcer.h"
//tmp libs
#include <iostream>
int main()
{
    std::list<std::vector<std::string>> ProgramText;
    Parcer("test.asm");
    std::cout << "Hello World!\n";
}