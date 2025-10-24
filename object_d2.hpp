#include "figure.hpp"
#include <iostream>

class Object_d2: public Figure{
    public:
        virtual uint32_t getSquare() = 0;
        virtual std::string getSizes() = 0;
        virtual std::string setSizes() = 0;
        virtual ~Object_d2();
        void show();
    protected:
        uint32_t square = 0;
};