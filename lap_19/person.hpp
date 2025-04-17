#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int tele_num;
public:
    Person();
    ~Person();
    Person(std::string name, int tele_num);
    std::string getName();
    int getNum();
};

#endif 