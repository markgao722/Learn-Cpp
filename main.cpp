#include <iostream>
// include all classes in the directory
#include "basics.h"
// import and alias a package
using std::cout;
using std::endl;

// Windows main function: WinMain
// Mac/Linux main function: main
int WinMain() {
    // Pointers demo ----------------------------

    // variable with value 5
    int x = 5;

    // pointer p = ahjf7fhkwfe
    int *p = &x;  

    // value at p = 5
    int x_value = *p;

    // reassign value at p to 10
    *p = 10;
    cout << "Value changed to 10" << endl;

    // ------------------------------------------

    // Object/null pointer demo -----------------

    // initalize object
    wrap::Basics o;

    // pointer types should match its object
    wrap::Basics *q = &o;

    // delete pointer and set to nullpointer to be safe
    delete q;
    q = nullptr;

    // ------------------------------------------
    return 0;
}