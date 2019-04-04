#ifndef __DECORATOR__
#define __DECORATOR__

#include "Components.h"

class Decorator {
private:
	Component* pcmp;
public:
	Decorator(Component* pcmp): pcmp(pcmp) { }
	virtual void operation();
};

class ConcreteDecorator : public Decorator {
public:
	ConcreteDecorator(Component* pcmp): Decorator(pcmp) { }
	void addBehaviour();
	void operation();
};
#endif
