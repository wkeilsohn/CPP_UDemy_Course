#include <stdio.h>
#include <iostream>
#include <string>
#include <array>
#include <iterator>
#include <algorithm>

int main()
{
	std::cout << "Please enter your favorite number: ";
    
    int user_val;
    std::cin >> user_val;
    
    if(user_val == 8){
        std::cout << "We have the same favorite number!" << std::endl;
    }else {
        std::cout << "That number is okay..." << std::endl;
        std::cout << "However, have you heard that there is this great number called the number 8? (Y/N)";
        
        std::string in_val;
        std::cin >> in_val;
        
        std::array<std::string, 4> answer_array = {"Yes", "yes", "Y", "y"};
        bool in_array = std::find(std::begin(answer_array), std::end(answer_array), in_val) != std::end(answer_array);
        
 
        if(in_array){
            std::cout << "You have?" << std::endl;
            std::cout << "...and you didn't pick it?!?" << std::endl;
            std::cout << "... for shame!" << std::endl;
        }else {
            std::cout << "Well then, I suposse I can forgive your poor life choices..." << std::endl;
            std::cout << "...But you really should try to find a better favorite number." << std::endl;
        }
    }
    
    //std::cout << "\nYour favorite number is: " << user_val << std::endl; 
	return 0;
}
