#include "Implementor.h"
#include "Abstraction.h"

#include <iostream>

using std::cout, std::endl;

int main() {
    Word *helloImp = new Hello();
    Print *hello = new PrintGreen(helloImp);
    hello->operation();

    cout << ' ';

    Word *worldImp = new World();
    Print *world = new PrintRed(worldImp);
    world->operation();
    cout << endl;

    return 0;
}
