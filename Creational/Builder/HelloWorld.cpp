#include "HelloWorld.h"
#include <iostream>

void HelloWorld::appendString(std::string str) {
	hw += str;
}

void HelloWorld::sayHello() {
	std::cout << hw << std::endl;
}
