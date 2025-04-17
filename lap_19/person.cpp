#include"person.hpp"
#include <iostream>
#include <string>
#include <fstream>
 

Person::Person(){};
Person::~Person(){};
Person::Person(std::string name, int tele_num):name(name), tele_num(tele_num){}
std::string Person::getName(){
    return name;
}
int Person::getNum(){
    return tele_num;
}

