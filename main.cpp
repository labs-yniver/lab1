#include <iostream>
#include "Kube.hpp"
void load_save(Kube &Kube);

int main(){
    try{
    Kube kube;
    kube.setName(std::string("kub1"));
    uint32_t s[] {2,3,4};
    kube.setSizes(s,3);
    kube.show();
    
    Kube Kube2;
    Kube2.setName(std::string("kub2"));
    Kube2.show();
    
    // Kube Kube2;
    Kube Kube3 = kube;
    // Kube3.show();
   load_save(Kube3);
   Kube3.setName(std::string("Kube3"));
    Kube3.show();
    }catch(std::string str){
        std::cout<<str<<std::endl;
    }
    return 0;
}

void load_save(Kube &Kube){
    std::ofstream out_f("txt.txt");
    if (!out_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        Kube.save(out_f);
        out_f.close();
    }
    std::ifstream in_f("txt.txt");
     if (!in_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        Kube.load(in_f);
        in_f.close();
    }
}