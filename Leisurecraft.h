#pragma once
#include "Watercraft.h"
#include <string>

using std::string;

class Leisurecraft: public Watercraft {
    public:
        /* 
           inherited members...
        */ 
        
        void setMaxPassengers(int m);
        int getMaxPassengers();

        // Constructors
        Leisurecraft();
        Leisurecraft(int l, string nm, int max);

    private:
        /*
            private members inaccessible to child
        */
        int maxPassengers_;
};