#ifndef __COMPONENT__
#define __COMPONENT__

class Component {
public:
	virtual void operation() = 0;
};

class ConcreteComponent : public Component {
public:
	void operation();
};
#endif
