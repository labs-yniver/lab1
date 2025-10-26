#include <iostream>
#include "Kube.hpp"
#include "quadrate.hpp"
#include "Keeper.hpp"
#include "Keeper.hpp"


void load_save(Kube &Kube);

int main(){
    // try{
    Quadrate quadrate;
    quadrate.setName(std::string("quadrate1"));
    uint32_t s1[] {12,32};
    quadrate.setSizes(s1,2);
    // quadrate.show();
    
    Quadrate quadrate2;
    quadrate2.setName(std::string("quadrate2"));
    // quadrate2.show();
    
    // Quadrate quadrate2;
    Quadrate quadrate3 = quadrate;
    // quadrate3.show();
   

    Kube kube;
    kube.setName(std::string("kub1"));
    uint32_t s2[] {2,3,4};
    kube.setSizes(s2,3);
    // kube.show();
    
    Kube Kube2;
    Kube2.setName(std::string("kub2"));
    // Kube2.show();
    
    // Kube Kube2;
    Kube Kube3 = kube;
    // Kube3.show();
   load_save(Kube3);
   Kube3.setName(std::string("Kube3"));
    // Kube3.show();


    Keeper keeper;
    keeper.add(&quadrate);
    keeper.add(&kube);
    keeper.save_to_file("txt.txt");
    Keeper keeper2;
    keeper2.load_from_file("txt.txt");
    for(int i =0;i<keeper2.len();++i){
        keeper2.at(i)->getData()->show();
    }
    // }catch(std::string str){
    //     std::cout<<str<<std::endl;
    // }
    return 0;
}

void load_save(Kube &Kube){
    std::ofstream out_f("txt1.txt");
    if (!out_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        Kube.save(out_f);
        out_f.close();
    }
    std::ifstream in_f("txt1.txt");
     if (!in_f.is_open())
    {
        throw std::string("Error read file");
    }else{
        
        Kube.load(in_f);
        in_f.close();
    }
}