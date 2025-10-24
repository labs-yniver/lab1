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
    
    // Quadrate quadrate2;
    Quadrate quadrate3 = quadrate;
    quadrate3.show();
    }catch(std::string str){
        std::cout<<str<<std::endl;
    }
    return 0;
}