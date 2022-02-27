#include <iostream>
#include <cmath>


void merge(int data[], int const low, int const middle, int const high)
{
    // get sizes of left and right array
    int const left_size = middle - low + 1;
    int const right_size = high - middle;
    // make sub arrays left and right of middle
    int *left_arr = new int[left_size], *right_arr = new int[right_size];
    // fill sub-arrays
    for (int i = 0; i < left_size; i++)
        left_arr[i] = data[low + i];
    for (int j = 0; j < right_size; j++)
        right_arr[j] = data[middle + 1 + j];
  
    int i = 0, j = 0; 
    int k = low;
  
    while (i < left_size && j < right_size) { // merge arrays
        if (left_arr[i] <= right_arr[j]) {
            data[k] = left_arr[i];
            i++;
        }
        else {
            data[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while (i < left_size) { // add left over elements of left array
        data[k] = left_arr[i];
        i++;
        k++;
    }
    while (j < right_size) { // add left over elements of right array
        data[k] = right_arr[j];
        j++;
        k++;
    }
}
  
void merge_sort(int data[], int const low, int const high)
{
    if (low >= high)
        return;
  
    int middle = floor(high + low) / 2;

    merge_sort(data, low, middle);
    merge_sort(data, middle + 1, high);

    merge(data, low, middle, high);
}
