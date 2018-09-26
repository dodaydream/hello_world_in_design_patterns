#include "HelloWorld.h"
#include <iostream>

void HelloWorldEn::sayHello () {
	std::cout << "Hello World" << std::endl;
}

void HelloWorldJp::sayHello () {
	std::cout << "こんにちは世界" << std::endl;
}

void HelloWorldZh::sayHello() {
	std::cout << "你好世界" << std::endl;
}
