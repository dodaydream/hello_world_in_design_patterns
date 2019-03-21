#include "HelloWorld.h"

class HelloWorldAdapter {
private:
    HelloWorld *hw;
    std::ostream& os;
public:
    HelloWorldAdapter(std::ostream &os): os(os) { hw = new HelloWorld(os); }
    void sayHelloWorld();
    ~HelloWorldAdapter() { delete hw; }
};
