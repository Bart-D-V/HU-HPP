#include <iostream>

int main(){
    int foo[100] = {};
    int max = 0;
    int min = INT_MAX;
    int sum = 0;
    int gem = 0;
    for (int i : foo) {
        foo[i] = rand();
        
        if (foo[i] > max) {
            max = foo[i];
        }
        else if (foo[i] < min) {
            min = foo[i];
        }
        sum += foo[i];
        gem += foo[i];
    }   
    std::cout << gem/100 << std::endl;
    std::cout << sum << std::endl;
    std::cout << max << std::endl;
    std::cout << min << std::endl;
}
