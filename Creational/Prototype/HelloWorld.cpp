#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Hello {
private:
    string hello;
public:
    Hello (string str): hello(str) {  }
    Hello (const Hello& that) {
        this->hello = that.hello;
    }
    void sayHello () {
        cout << hello;
    }
    Hello* clone() {
        return new Hello(*this);
    }
    void setHello (string hello) {
        this->hello = hello;
    }
};

class World {
public:
    void sayWorld () {
        cout << "World";
    }
    World* clone() {
        return new World();
    }
};

class HelloWorld {
    private:
        Hello* hello;
        World* world;
    public:
        HelloWorld () = default;
        HelloWorld (const HelloWorld& that) {
            this->hello = that.hello;
            this->world = that.world;
        }
        void initialize(Hello* hello, World* world) {
            this->hello = hello;
            this->world = world;
        }
        void sayHelloWorld() {
            this->hello->sayHello();
            cout << " ";
            this->world->sayWorld();
            cout << endl;
        }
        HelloWorld* clone() {
            return new HelloWorld(*this);
        }
};

int main() {
    Hello* helloZh = new Hello("你好");
    Hello* helloZhClone = helloZh->clone();
    helloZhClone->setHello("侬好");

    World* world = new World;

    HelloWorld helloWorldZh;
    helloWorldZh.initialize(helloZh, world);
    HelloWorld helloWorldZhClone;
    helloWorldZhClone.initialize(helloZhClone, world);

    helloWorldZh.sayHelloWorld();
    helloWorldZhClone.sayHelloWorld();

    return 0;
}
