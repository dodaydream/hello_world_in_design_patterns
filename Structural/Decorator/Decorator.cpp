#include "Decorator.h"
#include <iostream>

using std::cout, std::endl;

void ConcreteDecorator::addBehaviour() {
	cout << "behaviour added" << endl;
}

void Decorator::operation() {
	pcmp->operation();
}

void ConcreteDecorator::operation() {
	Decorator::operation();
	addBehaviour();
}
