// Include desired packages ===
#include <iostream>

// Include all classes in the directory ===
#include "Watercraft.h"
#include "Leisurecraft.h"

// Lift specific names to the current namespace ===
using std::cout;  // cout
using std::endl;  // endl

// on Windows: WinMain
// on Linux/Mac: main
int main() {
    // Pointers demo -----------------------------

    // Primitives
    int x = 5;
    int *p = &x;  // pointers point to addresses
    int v = *p;  // variables store what's pointed-at

    cout << "Variable x has value 5" << endl;
    cout << "Variable p has value " << p << endl;  // 0x16d0a31a8
    cout << "Variable p points to value " << *p << endl;  // 5
    cout << "Variable v has value " << v << endl;  // 5

    *p = 10;
    cout << "Pointer p now points to 10..." << endl;
    cout << "Variable p has value " << p << endl;  // 0x16d0a31a8
    cout << "Variable p points to value " << *p << endl;  // 10
    cout << "Variable v has value " << v << endl;  // 5

    // Dynamicaly initialized objects
    Watercraft *dyna_boat = new Watercraft(10, "DynamicBoatz");

    delete dyna_boat;
    dyna_boat = nullptr;  // delete pointer and set to nullpointer to be safe

    // Statically initialized objects
    Watercraft stat_boat;
    Watercraft *bp = &stat_boat;  // pointer should match pointed type

    //delete bp; static object pointers deleted by ___??

    cout << " ----- Finished executing main ----- " << endl;
    return 0;
}