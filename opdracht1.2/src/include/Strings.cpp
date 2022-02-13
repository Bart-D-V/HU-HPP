#include <iostream>
#include <string>

int main(){
    int var1 = INT_MAX;
    std::string var2 = "Mededeling! de frikandelbroodjes zijn er nog maar " + std::to_string(var1);

    std::cout << "deze variabele heeft de waarde: " << var1 << std::endl;

}