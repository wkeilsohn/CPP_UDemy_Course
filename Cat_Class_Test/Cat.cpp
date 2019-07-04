#include "Cat.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


Cat::Cat(string in_name)
{
    name = in_name;
    cout << "You have created a new cat called: "<< name << endl;
}

Cat::~Cat()
{
    cout << "Your cat, " << name << ", has left you." << endl;
}

void Cat::speak(){
    cout << "Meow" << endl;
}
