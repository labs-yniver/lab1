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

std::string Object_d2::getInfo()
{
   std::string str;
    str += "{" +std::string("\n");
    str += "type: "+getType() +std::string("\n");
    str += "name: "+getName() +std::string("\n");
    str += "img: "+getImg() +std::string("\n");
    str += "sizes: "+getSizes() +std::string("\n");
    str += "square: "+getSquare() +std::string("\n");
    str += "}" +std::string("\n");
    return str;
}
