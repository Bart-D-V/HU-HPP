#include <climits> 
#include <cfloat>
#include <iostream>
#include <cmath>

int main(){
    bool var1 = 1;
    char var2 = CHAR_MAX;
    signed char var3 =  SCHAR_MAX;
    unsigned char var4 = UCHAR_MAX;
    short var5 = SHRT_MAX;
    unsigned short var6 = USHRT_MAX;
    int var7 = INT_MAX;
    unsigned int var8 = UINT_MAX;
    long var9 = LONG_MAX;
    unsigned long var10 = ULONG_MAX;
    long long var11 = LONG_LONG_MAX;
    unsigned long long var12 = ULONG_LONG_MAX;
    float var13 = FLT_MAX;
    double var14 = DBL_MAX;
    long double var15 = LDBL_MAX;

    var13 = INT_MAX;
    var7 = DBL_MAX;

    std::cout << var1 << std::endl;
    std::cout << var2 << std::endl;
    std::cout << var3 << std::endl;
    std::cout << var4 << std::endl;
    std::cout << var5 << std::endl;
    std::cout << var6 << std::endl;
    std::cout << var7 << std::endl;
    std::cout << var8 << std::endl;
    std::cout << var9 << std::endl;
    std::cout << var10 << std::endl;
    std::cout << var11 << std::endl;
    std::cout << var12 << std::endl;
    std::cout << var13 << std::endl;
    std::cout << var14 << std::endl;
    std::cout << var15 << std::endl;
    return 0;
}