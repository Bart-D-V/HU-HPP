#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using std::vector, std::max_element, std::pow, std::generate, std::cout, std::endl;

int num_digits(int num)
{
    int digits = 0;
    if (num < 0) digits = 1;
    while(num) {
        num/= 10;
        digits++;
    }
    return digits;
}


vector<vector<int>> distribution_pass(vector<int> lst, int digit)
{
    vector<vector<int>> bucket_lst;

    for (long i = 0; i < lst.size(); i++) {
        if (num_digits(lst[i]) >= digit ) {
            vector<int> culumn(10, 0);

            int index = lst[i] / pow(10, digit-1);
            culumn[index % 10] = lst[i];

            bucket_lst.push_back(culumn);
        }
    }
    return bucket_lst;
}


vector<int> gathering_pass(vector<vector<int>> bucket_lst)
{
    vector<int> sorted_lst;

    for (int i = 0; i < 10; i++)
        for (long j = 0; j < bucket_lst.size(); j++) {
            if (bucket_lst[j][i] != 0){
                sorted_lst.push_back(bucket_lst[j][i]);
            }
            
    }
    return sorted_lst;
}


vector<int> bucket_sort(vector<int> lst)
{
    int digits = num_digits(*max_element(lst.begin(), lst.end()));

    for (long i = 0; i < digits; i++) {
        lst = gathering_pass(distribution_pass(lst, digits));
    }
    return lst;
}


void print(vector <int> const &a) {
   cout << "The vector elements are : ";

   for(long i=0; i < a.size(); i++)
   cout << a.at(i) << ' ';
}


int main()
{
    vector<int> vecRandomNo(50);
    generate(vecRandomNo.begin(), vecRandomNo.end(), []() {
        return rand() % 100;
    });
    print(bucket_sort(vecRandomNo));
}