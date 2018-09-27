class HelloWorldCJK
{
public:
	virtual void sayHello() = 0;
};

class HelloWorldLatin
{
public:
	virtual void sayHello() = 0;
};

class AbstractHelloWorldFactory
{
public:
	virtual HelloWorldLatin* createHelloWorldEn() { }
	virtual HelloWorldCJK* createHelloWorldJp() { }
	virtual HelloWorldCJK* createHelloWorldZh() { }
};

class ConcreteHelloWorldCJKFactory : public AbstractHelloWorldFactory
{
public:
	HelloWorldCJK* createHelloWorldJp();
	HelloWorldCJK* createHelloWorldZh();
};

class ConcreteHelloWorldLatinFactory : public AbstractHelloWorldFactory
{
public:
	HelloWorldLatin* createHelloWorldEn();
};

class HelloWorldEn : public HelloWorldLatin
{
public:
	void sayHello();
};

class HelloWorldZh : public HelloWorldCJK
{
public:
	void sayHello();
};

class HelloWorldJp : public HelloWorldCJK
{
public:
	void sayHello();
};
