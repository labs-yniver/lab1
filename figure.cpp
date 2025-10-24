#include "figure.hpp"

Figure::~Figure()
{
   std::cout << "Figure deleted!" << std::endl; 
}

void Figure::setName(std::string new_name)
{
   if(!name.empty()){
      name = new_name;
   }else{
      throw "Empty name";
   }
}

std::string Figure::getName()
{
return name;
}
