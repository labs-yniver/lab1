#include "Kube.hpp"

Kube::~Kube()
{
   std::cout << "Kube deleted!" << std::endl; 
}

Kube::Kube()
{
   std::cout << "Kube created simple!" << std::endl; 

}

Kube::Kube(const Kube & copy)
{
   std::cout << "Kube created copy!" << std::endl; 
    height = copy.height;
    width = copy.width;
    long_ = copy.long_;
    setName(copy.getName());
}

uint32_t Kube::getSquare()
{
return long_*width*6;
}

uint32_t Kube::getVolume()
{
return long_*width*height;
}

std::string Kube::getSizes()
{
return std::string("Size Kube: height = ")+std::to_string(height)+
std::string("; width = ")+std::to_string(width)+
std::string("; long = ")+std::to_string(long_)+std::string(";") ;
}

std::string Kube::getImg()
{
    std::string str = "\n";

    str = str + std::string("     .+------+\n");
    str = str + std::string("   .' |    .'|\n");
    str = str + std::string("  +---+--+'  |\n");
    str = str + std::string("  |   |  |   |\n");
    str = str + std::string("  |  .+--+---+\n");
    str = str + std::string("  |.'    | .' \n");
    str = str + std::string("  +------+'   \n");
return str;
}

std::string Kube::getType()
{
return type;
}

void Kube::setSizes(uint32_t sizes[], uint32_t len)
{
    if(len<3){
        throw std::string("Error seting size Kube");
    }
    height = sizes[0];
    width = sizes[1];
    long_ = sizes[2];
}

void Kube::save(std::ofstream & file)
{
    std::string line;
    file<<getName()<<std::endl;
    file<<std::to_string(height)<<std::endl;
    file<<std::to_string(width)<<std::endl;
    file<<std::to_string(long_)<<std::endl;
}

void Kube::load(std::ifstream & file)
{
    std::string line;
    std::getline(file, line);
    setName(line);
    std::getline(file, line);
    height = std::stoul(line);
    std::getline(file, line);
    width = std::stoul(line);;
    std::getline(file, line);
    long_ = std::stoul(line);;

}
