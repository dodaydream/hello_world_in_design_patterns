#include "HelloWorld.h"

int main()
{
	AbstractHelloWorldFactory* factoryCJK = new ConcreteHelloWorldCJKFactory();
	AbstractHelloWorldFactory* factoryLatin = new ConcreteHelloWorldLatinFactory();

	HelloWorldLatin* helloEn = factoryLatin->createHelloWorldEn();
	helloEn->sayHello();

	HelloWorldCJK* helloJp = factoryCJK->createHelloWorldJp();
	helloJp->sayHello();

	HelloWorldCJK* helloZh = factoryCJK->createHelloWorldZh();
	helloZh->sayHello();
	return 0;
}
