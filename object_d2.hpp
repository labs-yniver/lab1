#ifndef __Object_d2__
#define __Object_d2__

#include "figure.hpp"
#include <iostream>

class Object_d2: public Figure{
    public:
        virtual ~Object_d2();
        Object_d2();
        // Object_d2(const Object_d2& copy);
        std::string getInfo();
};

#include "object_d2.cpp"
#endif