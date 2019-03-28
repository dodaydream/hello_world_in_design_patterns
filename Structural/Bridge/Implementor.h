#ifndef __IMPLEMENTER_H__
#define __IMPLEMENTER_H__

#include <string>

using std::string;

class Word {
    public:
        virtual string getWord() = 0;
    private:
        string word;
};

class Hello: public Word {
    public:
        string getWord();
};

class World: public Word {
    public:
        string getWord();
};
#endif
