#include "Implementor.h"

#include <string>

using std::string;

string Hello::getWord() {
    return "Hello";
}

string World::getWord() {
    return "World";
}
