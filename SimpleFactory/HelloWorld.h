class HelloWorld
{
public:
	virtual void sayHello() = 0;
};

class HelloWorldFactory
{
public:
	HelloWorld* createHelloWorld(short);
};

class HelloWorldEn : public HelloWorld
{
public:
	void sayHello();
};

class HelloWorldZh : public HelloWorld
{
public:
	void sayHello();
};

class HelloWorldJp : public HelloWorld
{
public:
	void sayHello();
};

const short LANG_EN = 1;
const short LANG_JP = 2;
const short LANG_ZH = 3;
