// compile header file only once
#pragma once

// declare namespace
namespace wrap {
    // declare class
    class Basics {
        // declare public variables
        public:
            double getHeight();
            double setHeight(double h);
            char getLastInitial();
            char setLastInitial(char i);
            int demoStatements(bool whileLoop, int wildcard);
        
        // declare private variables
        private:
            // trailing underscore for private variables
            double height_; 
            char lastInitial_;
    };
}
