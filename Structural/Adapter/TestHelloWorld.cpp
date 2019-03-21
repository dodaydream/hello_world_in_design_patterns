#include <iostream>
#include "HelloWorldAdapter.h"

int main() {
    HelloWorld hw(std::cout);
    HelloWorldAdapter hwa(std::cout, hw);
    hwa.sayHelloWorld();
    std::cout << std::endl;
    return 0;
}
