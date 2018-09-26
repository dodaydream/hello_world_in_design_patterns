#include "HelloWorld.h"

int main()
{
	HelloWorldFactory factory = HelloWorldFactory();

	HelloWorld* helloEn = factory.createHelloWorld(LANG_EN);
	helloEn->sayHello();

	HelloWorld* helloJp = factory.createHelloWorld(LANG_JP);
	helloJp->sayHello();

	HelloWorld* helloZh = factory.createHelloWorld(LANG_ZH);
	helloZh->sayHello();
	return 0;
}
