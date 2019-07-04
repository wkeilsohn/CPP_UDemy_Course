#include <stdio.h>
#include <string>
#include <iterator>
#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;


string inputCollector(){
    
    string user_input;
    cout << "Please enter a seed for your pyramid: ";
    getline(cin, user_input);
    
    return user_input;
}

void pyramidPrinder(string seed){
    
    int len = seed.length();
    string blank {" "};
    
    
    for(int i = 0; i < len; i ++){
        string tail = seed.substr(0, i);
        string head(tail);
        reverse(tail.begin(), tail.end());
        
        int blank_val = len - i;
        
        string blanks;
        for(int j = 0; j < blank_val; j ++){
            blanks += blank;
        };
        
        blanks += head;
        
        cout << blanks << seed[i] << tail << endl;
    }
}



int main()
{
	string user_string = inputCollector();
    
    //string test = "ABC";
    
    pyramidPrinder(user_string);
    
    
	return 0;
}
