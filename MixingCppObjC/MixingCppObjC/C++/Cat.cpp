//
//  Cat.cpp
//  MixingCppObjC
//
//  Created by Miralem Cebic on 27.07.17.
//  Copyright © 2017 Miralem Cebic. All rights reserved.
//

#include "Cat.hpp"

Cat::Cat(int initialAge)
{
    itsAge = initialAge;
    string = new char[10]();
}

Cat::Cat(const Cat& copy_from) {
    itsAge = copy_from.itsAge;
    string = new char[10]();
    std::copy(copy_from.string+0, copy_from.string+10, string);
}

Cat::~Cat()                 // destructor, just an example
{
    delete[] string;
}

int Cat::GetAge() const
{
    return itsAge;
}

void Cat::SetAge(int age)
{
    itsAge = age;
}

void Cat::Meow()
{
    std::cout << "Meow.\n";
}
