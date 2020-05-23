#include "Registers.h"

Registers::Registers()
{
   List.push_back(Register("EAX", 32));
   List.push_back(Register("EBX", 32));
   List.push_back(Register("ECX", 32));
   List.push_back(Register("EDX", 32));
   List.push_back(Register("ESP", 32));
   List.push_back(Register("EBP", 32));
   List.push_back(Register("ESI", 32));
   List.push_back(Register("EDI", 32));
   List.push_back(Register("CS", 32));
   List.push_back(Register("DS", 32));
   List.push_back(Register("SS", 32));
   List.push_back(Register("ES", 32));
   List.push_back(Register("AH", 8));
   List.push_back(Register("AL", 8));
   List.push_back(Register("BH", 8));
   List.push_back(Register("BL", 8));
   List.push_back(Register("CH", 8));
   List.push_back(Register("CL", 8));
   List.push_back(Register("DH", 8));
   List.push_back(Register("DL", 8));
}

int Registers::sizeFromName(std::string name)
{
    for (auto it : List) 
        if (it._name == name) return it._size;
    return 0;
}
