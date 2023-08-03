#include <iostream>
#include <string>
#include <vector>
#include "ancestry.h"

std::vector<std::string> Ancestry::AncestryList = {"human", "elf", "dwarf"};

int main() {
    Ancestry myAncestry;
    std::cout << myAncestry.getAncestry();



    return 0;
}

