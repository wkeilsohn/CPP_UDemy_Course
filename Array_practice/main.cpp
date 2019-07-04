#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	int num_array [] {1, 2, 3, 4};
    string word_array [] {"Can", "I", "Have", "A", "Little", "More?"};
    
    for(int i: num_array){
        cout << i << " ";
    }
    
    cout << " ... ";
    
    for(string j: word_array){
        cout << j << " ";
    }
    cout << "\n";
    
	return 0;
}
