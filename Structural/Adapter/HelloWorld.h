class HelloWorld {
private:
	std::ostream& os;
public:
	HelloWorld(std::ostream &os): os(os) { }
	void sayHello();
	void sayWorld();
};
