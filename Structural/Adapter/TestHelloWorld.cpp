#include <iostream>
#include "HelloWorldAdapter.h"

int main() {
    HelloWorldAdapter hwa(std::cout);
    hwa.sayHelloWorld();
    std::cout << std::endl;
    return 0;
}
