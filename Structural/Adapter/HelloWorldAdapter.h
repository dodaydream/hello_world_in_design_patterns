#include "HelloWorld.h"

class HelloWorldAdapter {
private:
    HelloWorld &hw;
    std::ostream& os;
public:
    HelloWorldAdapter(std::ostream &os, HelloWorld &hw): os(os), hw(hw) { }
    void sayHelloWorld();
};
