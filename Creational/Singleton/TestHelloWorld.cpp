#include "HelloWorld.h"

int main() {
	HelloWorld* hw = HelloWorld::getInstance();
	hw->sayHello();
	HelloWorld* hw2 = HelloWorld::getInstance();
	hw2->sayHello();
	return 0;
}
