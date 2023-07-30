#include "Watercraft.h"
#include "Leisurecraft.h"
#include <string>

using std::string;

Watercraft::Watercraft() {
    Watercraft(0, "");
};

Watercraft::Watercraft(int l) {
    Watercraft(l, "");
};

Watercraft::Watercraft(string nm) {
    Watercraft(0, nm);
};

Watercraft::Watercraft(int l, string nm) {
    length_ = l;
    name_ = nm;
};

void Watercraft::setLength(int l) {
    length_ = l;
};

int Watercraft::getLength() {
    return length_;
};

void Watercraft::setName(string nm) {
    name_ = nm;
};

string Watercraft::getName() {
    return name_;
}


Leisurecraft::Leisurecraft() {
    Leisurecraft(0, "", 0);
};

Leisurecraft::Leisurecraft(int l, string nm, int max) {
    Watercraft(l, nm);
    maxPassengers_ = max;
}

void Leisurecraft::setMaxPassengers(int m) {
    maxPassengers_ = m;
};

int Leisurecraft::getMaxPassengers() {
    return maxPassengers_;
};




// using namespace wrap;
/* two ways of referring to member of a specific namespace:
    - using namepsace
    - namespace::member
*/
