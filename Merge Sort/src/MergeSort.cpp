#include <iostream>
#include <vector>
#include <cmath>


using std::vector;


void merge(vector<int> data, int left, int middle, int right)
{
    int size_left, size_right;

    size_left = middle-left+1; size_right = right-middle;
    vector<int> lvec(size_left), rvec(size_right);

    for(int i = 0; i<size_left; i++) {
        lvec[i] = data[left+i];
    }
    for(int j = 0; j<size_right; j++){
        rvec[j] = data[middle+1+j];
    }

    int i = 0; int j = 0; int k = left;

    while(i < size_left && j<size_right) {
        if(lvec[i] <= rvec[j]) {
            data[k] = lvec[i];
            i++;
        }else{
            data[k] = rvec[j];
            j++;
        }
        k++;
    }

    while(i < size_left) {
        data[k] = lvec[i];
        i++; k++;
    }
    while(j < size_right) {
        data[k] = rvec[j];
        j++; k++;
    }
}

void merge_sort2(vector<int> data, int low, int high)
{
    if (high - low >= 1) {
        int middle = floor(high + low) / 2;

        merge_sort2(data, low, middle);        
        merge_sort2(data, middle++, high);
        
        merge(data, low, middle, high);
    }
}

void merge_sort(vector<int> data)
{
    merge_sort2(data, 0, data.size() - 1);
}