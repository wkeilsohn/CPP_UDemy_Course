#include <stdio.h>
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <map>

using namespace std;

map<char, char> letter_map = {
    
    {'A', 'Z'},
    {'B', 'Y'},
    {'C', 'X'},
    {'D', 'W'},
    {'E', 'V'},
    {'F', 'U'},
    {'G', 'T'},
    {'H', 'S'},
    {'I', 'R'},
    {'J', 'Q'},
    {'K', 'P'},
    {'L', 'O'},
    {'M', 'N'},
    {'N', 'M'},
    {'O', 'L'},
    {'P', 'K'},
    {'Q', 'J'},
    {'R', 'I'},
    {'S', 'H'},
    {'T', 'G'},
    {'U', 'F'},
    {'V', 'E'},
    {'W', 'D'},
    {'X', 'C'},
    {'Y', 'B'},
    {'Z', 'A'},
    {' ', '-'},
    {'-', ' '}
    
};


string messageObtainment(){
    
    string message;
    cout << "Please enter your message: ";
    getline(cin, message);
    
    return message;
}

string messageEncoder(string user_message){
   
    string out_string {};
 
    for(char letter: user_message){
        letter = toupper(letter);
        out_string += letter_map[letter];
    }
    
    return out_string;
}


int main()
{

    string in_string = messageObtainment();
    
    string encoded_string = messageEncoder(in_string);
    
    cout << "\nYour message is being transcribed as: " << encoded_string << endl;
    
    string end_string = messageEncoder(encoded_string);
    
    cout << "Your message is being returned as: " << end_string << endl;
    
	return 0;
}
