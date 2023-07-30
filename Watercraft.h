#pragma once  // Compile header file only once
#include <string>  // Import string type

using std::string; // Lift string to current namespace

class Watercraft {
    public:
        void setLength(int l);
        int getLength();
        
        void setName(string nm);
        string getName();

        // Constructors
        Watercraft();
        Watercraft(int l);
        Watercraft(string nm);
        Watercraft(int l, string nm);

    private:
        int length_;
        string name_;
};
