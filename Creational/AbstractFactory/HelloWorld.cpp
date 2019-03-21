#include "HelloWorld.h"
#include <iostream>

void HelloWorldLatin::sayHello() {
	std::cout << "Hello World in latin: ";
}

void HelloWorldCJK::sayHello() {
	std::cout << "Hello World in CJK: ";
}

void HelloWorldEn::sayHello () {
	HelloWorldLatin::sayHello();
	std::cout << "Hello World" << std::endl;
}

void HelloWorldJp::sayHello () {
	HelloWorldCJK::sayHello();
	std::cout << "こんにちは世界" << std::endl;
}

void HelloWorldZh::sayHello() {
	HelloWorldCJK::sayHello();
	std::cout << "你好世界" << std::endl;
}
