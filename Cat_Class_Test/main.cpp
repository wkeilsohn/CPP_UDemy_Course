#include <stdio.h>
#include <iostream>
#include <string>

#include "Cat.h"

using namespace std;

int main()
{
	Cat sam = Cat("Sam");
    sam.speak();
    
	return 0;
}
