#include <iostream>
// #include <ofstream>

class Figure{
    public:
        virtual void show() = 0;//вывод информации о фигуре
        virtual void save(std::ofstream& file) = 0;// сохранение в файл
        virtual void load(std::ifstream& file) = 0;// загрузка из файла
        virtual ~Figure();
        void setName(std::string new_name);
        std::string getName();
    private:
        std::string name;
};