#include <iostream>
#include <string>
#include <cmath>

#include "triangle.h"
using namespace std;

// Program 1
class Person
{
private:
    string name;
    int age;    
public:
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    Person():name("Mohamed") , age(24){};
    Person( int age_): age(age_){};
    ~Person(){};
};

// Program 2
class Records
{
private:
    string name;
    float salary;
    string birthDate;
public:
    Records():salary(0.0) {}
    Records(string _name , float _salary, string _birthDate):name(_name), salary(_salary), birthDate(_birthDate) {}
    ~Records() {}
    void setName(string Name){name=Name;}
    void setSalary(float sal){salary = sal;}
    void setBirthDate(string bdate){ birthDate = bdate;}
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Birth Date : "<<birthDate<<endl;
    }

};

// Program 2
class Account
{
private:
    string name;
    int accountNum;
    float balance;
public:
    Account():name("Mohamed"),accountNum(201806680),balance(1000.60){
        cout<<"The Object has been created sucsessfuly\n";
    }
    ~Account() {
        cout<<"The Object has been destroyed Sucsessfully\n";
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<accountNum<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};



int main(){

    int selection;
    cout<<"Please Select A Program:\n"<<"    [1] Program 1\n"<<"    [2] Program 2\n"<<"    [3] Program 3\n"<<"    [4] Program 4\n";
    cin>>selection;


    switch (selection)
    {
    case 1:{
        cout<<"Program 1:\n";
        Person person1, person2(25);
        cout<< "The Default value is:\n";
        person1.display();

        cout<<"The Initialized Value:\n";
        person2.display();
        break;
    }
    case 2:{
        Records record1, record2;
        Records* rec2ptr = &record2;
        string name , bdate;
        float salary;

        cout<<"Program 2:\n";
        cout<<"Refer using dot product:\n";
        cout<<"Enter The Name:";
        cin>>name;
        record1.setName(name);
        cout<<"Enter the salary:";
        cin>>salary;
        record1.setSalary(salary);
        cout<<"Enter the Birth Date:";
        cin>>bdate;
        record1.setBirthDate(bdate);
        cout<<"\n\nThe Recorded info is:\n";
        record1.display();

        cout<<"\n\nRefer using pointer:\n";
        cout<<"Enter The Name:";
        cin>>name;
        rec2ptr->setName(name);
        cout<<"Enter the salary:";
        cin>>salary;
        rec2ptr->setSalary(salary);
        cout<<"Enter the Birth Date:";
        cin>>bdate;
        rec2ptr->setBirthDate(bdate);
        cout<<"\n\nThe Recorded info is:\n";
        rec2ptr->display();

        break;
    }
    case 3:{
        Account acc;
        cout<<"Program 3:\n";
        acc.display();
        break;
    }
    case 4:{
        triangle tri;
        double base, height;
        cout<<"Program 4:\n";
        cout<<"Enter The Triangle Height:";
        cin>>height;
        tri.setHeight(height);
        cout<<"Enter The Triangle Base: ";
        cin>>base;
        tri.setBase(base);
        cout<<"\nThe Area = "<<tri.getArea()<<endl;
        cout<<"\nThe Perimeter = "<<tri.getPerimeter()<<endl;
        break;
    }
    default:{
        cout<<"Invalid Selection!!\n";
        break;
    }
    }
    

    return 0;
}