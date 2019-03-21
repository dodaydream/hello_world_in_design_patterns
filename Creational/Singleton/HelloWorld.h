class HelloWorld
{
private:
	static HelloWorld* instance;
	HelloWorld() { };
public:
	~HelloWorld();
	static HelloWorld* getInstance();
	void sayHello();
};
