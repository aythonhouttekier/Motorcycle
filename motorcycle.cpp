#include "motorcycle.h"

Woman::Woman(int age, std::string name)      //scope resolution operator
{
    set_name(name);
    set_age(age);
}


std::string Woman::to_string()
{

    return name + " is " + std::to_string(age) + " years old.";

}

int Woman::get_age()
{

    return age;

}

std::string Woman::get_name()
{

    return name;

}


void Woman::set_age(int age)
{

    this->age = age;

}

void Woman::set_name(std::string name)
{

    this->name = name;

}