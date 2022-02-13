#include <iostream>

using std::string, std::ostream;

class Opd1{

private:
    int var1;

public:
    Opd1();
    Opd1(int var1);

    string get_stringaantal();

    void set_stringaantal(int var1);
};