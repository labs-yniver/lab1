#ifndef __Object_d2__
#define __Object_d2__

#include "figure.hpp"
#include <iostream>

class Object_d2: public Figure{
    public:
        virtual uint32_t getSquare() = 0;
        virtual std::string getSizes() = 0;
        virtual std::string getImg() = 0;
        virtual std::string getType() = 0;
        virtual void setSizes(uint32_t sizes[], uint32_t len) = 0;
        virtual ~Object_d2();
        Object_d2();
        Object_d2(const Object_d2& copy);
        void show();
};

#include "object_d2.cpp"
#endif