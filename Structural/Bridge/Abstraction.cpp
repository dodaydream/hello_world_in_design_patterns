#include "Abstraction.h"
#include "Implementor.h"

#include <iostream>

using std::cout;

void PrintRed::operation() {
    cout << "\033[31m";
    cout << imp->getWord();
    cout << "\033[0m";
}

void PrintGreen::operation() {
    cout << "\033[32m";
    cout << imp->getWord();
    cout << "\033[0m";
}
