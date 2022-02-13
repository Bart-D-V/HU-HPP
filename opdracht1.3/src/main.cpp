#include <iostream>
#include "include/Opd1.hpp"

using std::cout, std::endl;

int main(){
    Opd1 str1(33);
    cout << str1.get_stringaantal() << endl;
    str1.set_stringaantal(32);
    cout << str1.get_stringaantal() << endl;

    return 0;
}