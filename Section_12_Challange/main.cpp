#include <stdio.h>
#include <string>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;

// Given the following arrays:
int array1[] {1, 2, 3, 4, 5};
int array2[] {10, 20, 30};

// Write two functions:
// - The first must print the array.
// - The second must multiply all values in the array, return the new array, and a location.

void print(int *i, int len){
        
    for(int j = 0; j < len; j++){
        cout << i[j] << " ";
    };
    
    cout << endl;
}

int * applyAll(int *i, int i_len, int *j, int j_len){
    
    int tot_len = i_len * j_len;
    
    int *array_out{};
    array_out = new int[tot_len];
    int y = 0;
    
    for(int x = 0; x < i_len; x++){
        for(int z = 0; z < j_len; z ++){
            int val = i[x] * j[z];
            //cout << val << " ";
            array_out[y] = val;
            ++y;
            
        }
    }
    
    cout << endl;
    return array_out;
}



int main()
{
    cout << "Array 1: ";
    print(array1, 5);
    cout << "Array 2: ";
    print(array2, 3);
    cout << "Result: ";
    auto loc_val = applyAll(array1, 5, array2, 3);
    print(loc_val, 15);
    delete[] loc_val;
    
	return 0;
}
