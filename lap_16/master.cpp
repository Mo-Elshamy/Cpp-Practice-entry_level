#include "master.hpp"

// Person
Person::Person() : name(""), code("") {}
Person::~Person() {}

void Person::setName(std::string name) { this->name = name; }
std::string Person::getName() const { return name; }
void Person::setCode(std::string code) { this->code = code; }
std::string Person::getCode() const { return code; }

// Account
Account::Account() : pay(0.0) {}
Account::~Account() {}
void Account::setPay(double pay) { this->pay = pay; }
double Account::getPay() const { return pay; }

// Admin
Admin::Admin() : experience(0) {}
Admin::~Admin() {}
void Admin::setExperience(int experience) { this->experience = experience; }
int Admin::getExperience() const { return experience; }

// Master
Master::Master() {}
Master::~Master() {}

void Master::setName(std::string name) { Person::setName(name); }
std::string Master::getName() const { return Person::getName(); }
void Master::setCode(std::string code) { Person::setCode(code); }
std::string Master::getCode() const { return Person::getCode(); }
void Master::setPay(double pay) { Account::setPay(pay); }
double Master::getPay() const { return Account::getPay(); }
void Master::setExperience(int experience) { Admin::setExperience(experience); }
int Master::getExperience() const { return Admin::getExperience(); }