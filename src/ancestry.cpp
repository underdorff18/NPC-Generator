#include "ancestry.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

Ancestry::Ancestry() {
    int maxRandom = Ancestry::AncestryList.size();
    std::srand(time(0));
    int randomNum = std::rand();
    int randomAncestry = randomNum % maxRandom;
    Ancestry::setAncestry(randomAncestry);
}

std::string Ancestry::getAncestry() {
    return Ancestry::AncestryList[Ancestry::ancestryVal];
}

void Ancestry::setAncestry(int ancestry) {
    Ancestry::ancestryVal = static_cast<Ancestry::AncestryValue>(ancestry);
}


