#ifndef STAFF_HPP
#define STAFF_HPP

#include<string>

class Staff
{
private:
    std::string code;
    std::string name;
public:
    Staff();
    ~Staff();
    void setCode(std::string code);
    std::string getCode();
    void setName(std::string name);
    std::string getName();
};


class Education
{
private:
    std::string qualification;
public:
    Education();
    ~Education();
    void setQualification(std::string qualification);
    std::string getQualification();
};

class Teacher : public Staff , public Education
{
private:
    std::string subject;
    std::string publication;
public:
    Teacher();
    ~Teacher();
    void setSubject(std::string subject);
    std::string getSubject();
    void setPublication(std::string publication);
    std::string getPublication();
};

class Officer : public Staff , public Education
{
private:
    std::string grade;
public:
    Officer ();
    ~Officer ();
    void setGrade(std::string grade);
    std::string getGrade();
};

class Typist : public Staff
{
private:
    int speed;
public:
    Typist ();
    ~Typist ();
    void setSpeed(int speed);
    int getSpeed();
};

class Regular : public Typist
{
private:
    double mounthly_salary;
public:
    Regular();
    ~Regular();
    void setMounthlySalary( double mounthly_salary);
    double getMounthlySalary();
};

class Casual : public Typist
{
private:
    double daily_wages;
public:
    Casual();
    ~Casual();
    void setDailyWages( double daily_wages);
    double getDailyWages();
};

#endif