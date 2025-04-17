#include "staff.hpp"
#include <iostream>

/* ==================== Staff ==================== */
Staff::Staff() {}
Staff::~Staff() {}

void Staff::setCode(std::string code) {
    this->code = code;
}
std::string Staff::getCode() {
    return code;
}

void Staff::setName(std::string name) {
    this->name = name;
}
std::string Staff::getName() {
    return name;
}

/* ==================== Education ==================== */
Education::Education() {}
Education::~Education() {}

void Education::setQualification(std::string qualification) {
    this->qualification = qualification;
}
std::string Education::getQualification() {
    return qualification;
}

/* ==================== Teacher ==================== */
Teacher::Teacher() {}
Teacher::~Teacher() {}

void Teacher::setSubject(std::string subject) {
    this->subject = subject;
}
std::string Teacher::getSubject() {
    return subject;
}

void Teacher::setPublication(std::string publication) {
    this->publication = publication;
}
std::string Teacher::getPublication() {
    return publication;
}

/* ==================== Officer ==================== */
Officer::Officer() {}
Officer::~Officer() {}

void Officer::setGrade(std::string grade) {
    this->grade = grade;
}
std::string Officer::getGrade() {
    return grade;
}

/* ==================== Typist ==================== */
Typist::Typist() : speed(0) {}
Typist::~Typist() {}

void Typist::setSpeed(int speed) {
    this->speed = speed;
}
int Typist::getSpeed() {
    return speed;
}

/* ==================== Regular ==================== */
Regular::Regular() : mounthly_salary(0.0) {}
Regular::~Regular() {}

void Regular::setMounthlySalary(double mounthly_salary) {
    this->mounthly_salary = mounthly_salary;
}
double Regular::getMounthlySalary() {
    return mounthly_salary;
}

/* ==================== Casual ==================== */
Casual::Casual() : daily_wages(0.0) {}
Casual::~Casual() {}

void Casual::setDailyWages(double daily_wages) {
    this->daily_wages = daily_wages;
}
double Casual::getDailyWages() {
    return daily_wages;
}
