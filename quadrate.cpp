#include "quadrate.hpp"

Quadrate::~Quadrate()
{
   std::cout << "Quadrate deleted!" << std::endl; 
}

Quadrate::Quadrate()
{
   std::cout << "Quadrate created simple!" << std::endl; 

}

Quadrate::Quadrate(const Quadrate & copy)
{
   std::cout << "Quadrate created copy!" << std::endl; 
    height = copy.height;
    width = copy.width;
    setName(copy.getName());
}

uint32_t Quadrate::getSquare()
{
return height*width;
}

std::string Quadrate::getSizes()
{
return std::string("Size Quadrate: height = ")+std::to_string(height)+
std::string("; width = ")+std::to_string(width)+std::string(";") ;
}

std::string Quadrate::getImg()
{
    std::string str = "\n";
    str = str + std::string("+------+\n");
    str = str + std::string("|      |\n");
    str = str + std::string("|      |\n");
    str = str + std::string("+------+\n");
return str;
}

void Quadrate::setSizes(uint32_t sizes[], uint32_t len)
{
    if(len<2){
        throw std::string("Error seting size Quadrate");
    }
    height = sizes[0];
    width = sizes[1];
}

void Quadrate::save(std::ofstream & file)
{
    std::string line;
    file<<getName()<<std::endl;
    file<<std::to_string(height)<<std::endl;
    file<<std::to_string(width)<<std::endl;
}

void Quadrate::load(std::ifstream & file)
{
    std::string line;
    std::getline(file, line);
    setName(line);
    std::getline(file, line);
    height = std::stoul(line);
    std::getline(file, line);
    width = std::stoul(line);;

}
