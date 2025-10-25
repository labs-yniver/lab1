#ifndef __Object_d3__
#define __Object_d3__

#include "figure.hpp"
#include <iostream>

class Object_d3: public Figure{
    public:
        virtual void setSizes(uint32_t sizes[], uint32_t len) = 0;
        virtual uint32_t getVolume() = 0;
        virtual ~Object_d3();
        Object_d3();
        Object_d3(const Object_d3& copy);
        std::string getInfo();
};

#include "Object_d3.cpp"
#endif