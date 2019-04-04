#include "Decorator.h"
#include "Components.h"

int main() {
	ConcreteComponent comp;
	ConcreteDecorator decor(&comp);
	decor.operation();

	return 0;
}
