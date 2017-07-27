//
//  Cat.hpp
//  MixingCppObjC
//
//  Created by Miralem Cebic on 27.07.17.
//  Copyright © 2017 Miralem Cebic. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include <iostream>

class Cat
{
public:
    Cat(int initialAge);
    Cat(const Cat& copy_from);
    ~Cat();
    
    int GetAge() const;
    void SetAge(int age);
    void Meow();
private:
    int itsAge; 
    char * string;
};

#endif /* Cat_hpp */
