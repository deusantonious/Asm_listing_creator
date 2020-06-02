#include<list>
#include<vector>
#include<string>
#include<iterator>
#include "Parcer.h"
#include "analisator.h"
#include "lex_table.h"
//tmp libs
#include <iostream>
int main()
{
    std::list<std::vector<std::string>> ProgramText; //our program rows
    Parcer parcer("test.asm"); // creating percer obj
    ProgramText = parcer.parce(); // filling ProgramText from file
    std::list<std::vector<std::string>>::iterator it = ProgramText.begin(); // iterator 2 first row
    for (auto i : ProgramText) {
        lex_table l(i);
        l.print();
    }
    
    
}