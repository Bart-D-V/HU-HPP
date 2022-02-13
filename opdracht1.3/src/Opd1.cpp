#include "include/Opd1.hpp"

Opd1::Opd1(){
    var1 = 0;
}

Opd1::Opd1(int var1){
    this->var1 = var1;
}

string Opd1::get_stringaantal(){
    return "het string aantal is: " + std::to_string(var1);
}

void Opd1::set_stringaantal(int var1){
    this->var1 = var1;
}