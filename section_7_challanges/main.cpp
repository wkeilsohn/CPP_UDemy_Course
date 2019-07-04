#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector <int>vector1;
    vector <int>vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(vector1.size()-1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    for(int i: vector2){
        cout << i << endl;
    }
   
    cout << "End of seperate vectors." << endl;
 
    vector <vector<int> > vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    for(vector<int> j: vector_2d){
        for(int x: j){
            cout << x << endl;
        }
    }
    
    vector1.at(0) = 1000;
    
    cout << "Re-display the vector after the change." << endl;
    
    for(vector<int> j: vector_2d){
        for(int x: j){
            cout << x << endl;
        }
    }
    
    cout << "Show just the element after the change." << endl;
    
    cout << vector1.at(0) << endl;
    
	return 0;
}
