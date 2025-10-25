#ifndef __Quadrate__
#define __Quadrate__

#include "object_d2.hpp"

class Quadrate: public Object_d2{
    public:
        ~Quadrate();
        Quadrate();
        Quadrate(const Quadrate &copy);
        uint32_t getSquare();
        std::string getSizes();
        std::string getImg();
        std::string getType();
        void setSizes(uint32_t sizes[], uint32_t len);
        bool save(std::ofstream& file);// сохранение в файл
        bool load(std::ifstream& file);// загрузка из файла
        const std::string type = "quadrate";
    private:
        uint32_t height = 0;
        uint32_t width = 0;

};

#include "quadrate.cpp"
#endif