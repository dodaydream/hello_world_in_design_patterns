#include "HelloWorld.h"

int main()
{
	ConcreteHelloWorldBuilder* builder = new ConcreteHelloWorldBuilder();

	HelloWorldDirector director;
	director.setBuilder(builder);

	HelloWorld* hello = director.construct();
	hello->sayHello();

	delete builder;
	delete hello;

	return 0;
}
