#include "Keeper.hpp"

inline bool Keeper::save_to_file(std::string file_name)
{
    std::ofstream out_f(file_name, std::ios::out | std::ios::binary);
    if (!out_f.is_open())
    {
        throw std::string("Error write to file");
    }
    for(int i =0;i<this->len();++i){
        this->at(i)->getData()->save(out_f);
    }
    out_f.close();



return false;
}

inline bool Keeper::load_from_file(std::string file_name)
{
    std::ifstream in_f(file_name, std::ios::in | std::ios::binary);
     if (!in_f.is_open())
    {
        throw std::string("Error read file");
    }
        
    // Kube.load(in_f);
    
            // cout<<"load"<<endl;
    std::string str;
    // auto cur = in_f.tellg();
    while(!in_f.eof()){
        // std::getline(in_f, str);
        // std::cout<<str;
        Figure *fig = nullptr;
        int res_load = 0;
        for(int i = 0;i<2;++i){
            res_load = 0;
            // std::string line;
            // std::getline(in_f, line);
            // std::cout<<"ine = "<<line<<std::endl;
            if(i==0){
                fig = new Quadrate;
            }else if(i==1){
                fig = new Kube;
            }else{
                return 0 ;
            }
            res_load  = fig->load(in_f);
            if(res_load == 1){
                this->add(fig);
                // fig->show();
                // fig = nullptr;
                // cur = in_f.tellg();
                break;
            }else if(res_load == -1){
                in_f.close();
                return true;
            }else if(res_load == 0){
               // in_f.seekg(-1, std::ifstream::cur );
                delete fig;
                fig = nullptr;
            }else{
                return 0;
            }
        }
        // if(res_load != 1){
        //     std::string line;
        //     if(in_f.eof()){return 1;}
        //     std::getline(in_f, line);
        //     cur = in_f.tellg();
        //     std::cout<<"not not = "<<line<<std::endl;
          
        // }
        // if(cur == in_f.tellg()){
        //     // cur = in_f.tellg();
        //     std::string line;
        //     std::getline(in_f, line);
        //     std::cout<<"ine = "<<line<<std::endl;
        // }
        // else{
        //     return 0;
        // }
    }
    // fseek(fp, -1*size, SEEK_CUR); 
    // for
    in_f.close();
return true;
}
