#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>


using namespace std;

vector<vector<int>> vector_2d
{
    {1, 2, 3},
    {10, 20, 30, 40},
    {100, 200, 300, 400, 500}
};

int main()
{
	for(auto vec: vector_2d){
        for(auto val: vec){
            cout << val << " ";
        }
        cout << endl;
    }
	return 0;
}
