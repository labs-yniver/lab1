#include "Object_d3.hpp"

Object_d3::~Object_d3()
{
   std::cout << "Object_d3 deleted!" << std::endl; 
}

Object_d3::Object_d3()
{
   std::cout << "Object_d3 create simple!" << std::endl; 

}

Object_d3::Object_d3(const Object_d3 & copy)
{
   std::cout << "Object_d3 create copy!" << std::endl; 
}

void Object_d3::show()
{
    std::cout << "{" << std::endl;
    std::cout << "name: "<< getName() << std::endl;
    std::cout << "type: "<< getType() << std::endl;
    std::cout << "img: "<< getImg() << std::endl;
    std::cout << "sizes: "<< getSizes() << std::endl;
    std::cout << "square: "<< getSquare() << std::endl;
    std::cout << "volume: "<< getVolume() << std::endl;
    std::cout << "}" << std::endl;
}
