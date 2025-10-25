#include "Keeper.hpp"

inline bool Keeper::save_to_file(std::string file_name)
{
    std::ofstream out_f(file_name);
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
    std::ifstream in_f(file_name);
     if (!in_f.is_open())
    {
        throw std::string("Error read file");
    }
        
    // Kube.load(in_f);
    
            // cout<<"load"<<endl;
    std::string str;
    while(!in_f.eof()){
        // std::getline(in_f, str);
        // std::cout<<str;
        auto cur = in_f.cur - 1;
        Figure *fig = nullptr;
        for(int i = 0;i<2;++i){
            in_f.seekg(cur, std::ifstream::beg );
            if(i==0){
                fig = new Quadrate();
            }else if(i==1){
                fig = new Kube();
            }else{
                return 0 ;
            }

            if(fig!=nullptr && fig->load(in_f)){
                this->add(fig);
                fig->show();
            }else{
                delete fig;
                fig = nullptr;
            }
        }
        // if(fig==nullptr){
        //     return 0;
        // }
    }
    // fseek(fp, -1*size, SEEK_CUR); 
    // for
    in_f.close();
return true;
}
