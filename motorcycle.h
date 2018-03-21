#pragma once
#include <string>

class Woman
{

    //constructors
    public:
        Woman(int age, std::string name);

    public:
        int get_age();
        std::string get_name();

    public:
        std::string to_string();

    //setters
    public:
        void set_age();
        void set_name();

    // Attributes
    private:
        int age;
        std::string name;


};