// import header file
#include "basics.h"

namespace wrap {
    // Automatic Default Constructor: all members are default

    // Custom Default Constructor
    Basics::Basics() {
        height_ = 0;
        lastInitial_ = 'A';
    }

    // Copy Constructor
    Basics::Basics(const Basics &obj) {
        height_ = obj.height_;
        lastInitial_ = obj.lastInitial_;
    }

    // implement methods
    double Basics::getHeight() {
        return height_;
    }

    double Basics::setHeight(double h) {
        height_ = h;
        return h;
    }

    char Basics::getLastInitial() {
        return lastInitial_;
    }

    char Basics::setLastInitial(char i) {
        lastInitial_ = i;
        return i;
    }

    int Basics::demoStatements(bool whileLoop, int wildcard) {
        int output = 1;

        // if statement
        if (whileLoop)
        {
            // while loop
            int m;
            while (m > -99) {
                output = output - m;
                m--;
            }
        }
        else if (wildcard > 1)
        {
            // for loop
            for (int n = 1; n <= wildcard; n++) {
                output = output * n;
            }
        }
        else 
        {
            output = -99;
        };
        
        return output;
    }
}
