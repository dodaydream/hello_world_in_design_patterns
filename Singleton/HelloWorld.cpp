#include "HelloWorld.h"
#include <iostream>

HelloWorld* HelloWorld::instance = nullptr;

HelloWorld* HelloWorld::getInstance() {
	if (HelloWorld::instance == nullptr) {
		HelloWorld::instance = new HelloWorld;
	}
	return HelloWorld::instance;
}

void HelloWorld::sayHello() {
	std::cout << this << " HelloWorld" << std::endl;
}

HelloWorld::~HelloWorld() {
	delete HelloWorld::instance;
}
