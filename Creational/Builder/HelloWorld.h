#include <string>

class HelloWorld
{
public:
	void appendString(std::string);
	void sayHello();
private:
	std::string hw = "";
};

class HelloWorldBuilder
{
public:
	HelloWorldBuilder () {
		hw = new HelloWorld();
	};
	virtual void buildHello() = 0;
	virtual void buildWorld() = 0;
	HelloWorld* getResult();
protected:
	HelloWorld* hw;
};

class ConcreteHelloWorldBuilder: public HelloWorldBuilder
{
public:
	void buildHello();
	void buildWorld();
};

class HelloWorldDirector
{
public:
	HelloWorld* construct();
	void setBuilder(HelloWorldBuilder*);
private:
	HelloWorldBuilder* builder;
};
