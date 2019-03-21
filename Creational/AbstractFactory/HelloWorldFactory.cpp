#include "HelloWorld.h"

HelloWorldLatin* ConcreteHelloWorldLatinFactory::createHelloWorldEn() {
	return new HelloWorldEn();
}

HelloWorldCJK* ConcreteHelloWorldCJKFactory::createHelloWorldJp () {
	return new HelloWorldJp();
}

HelloWorldCJK* ConcreteHelloWorldCJKFactory::createHelloWorldZh () {
	return new HelloWorldZh();
}
