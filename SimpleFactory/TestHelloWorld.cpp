#include "HelloWorld.h"

int main()
{
	CreateHelloWorld factory = CreateHelloWorld();
	HelloWorld* hello = factory.createHelloWorld();
	hello->sayHello();
	return 0;
}
