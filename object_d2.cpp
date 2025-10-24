#include "object_d2.hpp"

Object_d2::~Object_d2()
{
   std::cout << "Object_d2 deleted!" << std::endl; 
}

Object_d2::Object_d2()
{
   std::cout << "Object_d2 create simple!" << std::endl; 

}

// Object_d2::Object_d2(const Object_d2 & copy)
// {
//    std::cout << "Object_d2 create copy!" << std::endl; 
// }

void Object_d2::show()
{
    std::cout << "{" << std::endl;
    std::cout << "name: "<< getName() << std::endl;
    std::cout << "type: "<< getType() << std::endl;
    std::cout << "img: "<< getImg() << std::endl;
    std::cout << "sizes: "<< getSizes() << std::endl;
    std::cout << "square: "<< getSquare() << std::endl;
    std::cout << "}" << std::endl;
}
