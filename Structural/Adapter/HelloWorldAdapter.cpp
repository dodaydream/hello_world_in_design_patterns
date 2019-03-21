#include <iostream>
#include "HelloWorldAdapter.h"

void HelloWorldAdapter::sayHelloWorld() {
    hw.sayHello();
    os << " ";
    hw.sayWorld();
}
