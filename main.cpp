#include <iostream>
#include "quadrate.hpp"
int main(){
    try{
    Quadrate quadrate;
    quadrate.setName(std::string("kub1"));
    uint32_t s[] {12,32};
    quadrate.setSizes(s,2);
    quadrate.show();
    
    Quadrate quadrate2;
    quadrate2.setName(std::string("kub2"));
    quadrate2.show();
    std::ofstream out_f("txt.txt");
    if (!out_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        quadrate.save(out_f);
        out_f.close();
    }
    // Quadrate quadrate2;
    Quadrate quadrate3 = quadrate;
    // quadrate3.show();
    std::ifstream in_f("txt.txt");
    if (!in_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        quadrate3.load(in_f);
        in_f.close();
    }
    quadrate3.show();
    }catch(std::string str){
        std::cout<<str<<std::endl;
    }
    return 0;
}