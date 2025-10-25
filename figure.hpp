#ifndef __Figure__
#define __Figure__
#include <iostream>
#include <fstream>
// #include <ofstream>

class Figure{
    public:
        Figure();
        Figure(const Figure &copy);
        void show();//вывод информации о фигуре
        virtual std::string getInfo() = 0;//вывод информации о фигуре
        virtual bool save(std::ofstream& file) = 0;// сохранение в файл
        virtual bool load(std::ifstream& file) = 0;// загрузка из файла
        virtual std::string getImg() = 0;
        virtual std::string getType() = 0;
        virtual uint32_t getSquare() = 0;
        virtual std::string getSizes() = 0;
        virtual ~Figure();
        void setName(std::string new_name);
        std::string getName() const;
    private:
        std::string name;
};
// std::ostream& operator << (std::ostream &os, const Figure &person);
// std::ostream & operator<<(std::ostream & os, const Figure & fig)
// {
//    return fig.getInfo();
// }
#include "figure.cpp"
#endif