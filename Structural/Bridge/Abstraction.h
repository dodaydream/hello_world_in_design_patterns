#ifndef __ABSTRACTION_H__
#define __ABSTRACTION_H__

#include "Implementor.h"

class Print {
    protected:
        Word* imp;
    public:
        Print(Word* imp): imp(imp) { }
        virtual void operation() = 0;
};

class PrintGreen: public Print{
    public:
        PrintGreen(Word* imp): Print(imp) { }
        void operation();
};

class PrintRed: public Print{
    public:
        PrintRed(Word* imp): Print(imp) { }
        void operation();
};
#endif
