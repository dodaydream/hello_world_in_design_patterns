#include "HelloWorld.h"

void ConcreteHelloWorldBuilder::buildHello() {
	hw->appendString("Hello");
}

void ConcreteHelloWorldBuilder::buildWorld() {
	hw->appendString(" World");
}

HelloWorld* HelloWorldBuilder::getResult() {
	return hw;
}

HelloWorld* HelloWorldDirector::construct() {
	builder->buildHello();
	builder->buildWorld();
	return builder->getResult();
}

void HelloWorldDirector::setBuilder(HelloWorldBuilder* hb) {
	builder = hb;
}
