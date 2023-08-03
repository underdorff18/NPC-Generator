#include <vector>
#include <string>
#pragma once

class Ancestry {
    private:
        enum AncestryValue {HUMAN, ELF, DWARF} ancestryVal;
        static std::vector<std::string> AncestryList;
        //static std::string AncestryList[3];
    public:
        Ancestry();
        std::string getAncestry();
        void setAncestry(int ancestry);
};

