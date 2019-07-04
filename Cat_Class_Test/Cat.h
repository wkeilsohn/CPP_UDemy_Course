#ifndef CAT_H
#define CAT_H

#include <string>

class Cat
{
public:
    Cat(std::string in_name);
    ~Cat();
    
    void speak();
    
private:
    std::string name {""};

};

#endif // CAT_H
