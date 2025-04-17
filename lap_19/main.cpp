#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "person.hpp"
using namespace std;

void menuDisplay(){
    cout << "\n*** MENU ***\n";
    cout << "[1] Find Preson Number By Name" << endl;
    cout << "[2] Find Preson Name By Number" << endl;
    cout << "[3] Add New Person" << endl;
    cout << "[4] Delete Person" << endl;
    cout << "[5] Exit" << endl;
}

// Load File Content
void loadFile(vector<Person*> &persons){
    ifstream file("person.txt");

    if (!file)
    {
        cout<<"File Not Exist. Creating New One .....\n";
        ofstream newfile("person.txt");
        newfile.close();
        return;
    }
    
    string name, num;
    while (file >> name >> num)
    {
        int number = stoi(num);
        persons.push_back(new Person(name, number));
    }
    file.close();
}

// Reload File Content
void reloadfile(vector<Person*> &persons){
    ofstream file("person.txt");
    for (auto &&i : persons)
    {
        file << i->getName() << " " << i->getNum() << endl;
    }
    file.close();
}

// Display Persons 
void displayPersons(vector<Person*> &persons){
    int count=1;
    for (auto &&i : persons)
    {
        cout<<count<<"- "<<i->getName()<<" "<<i->getNum()<<endl;
        count++;
    }
}

// Find number by name
void findNum(vector<Person*> &persons , string name){
    for (auto &&i : persons)
    {
     if(i->getName() == name ){
        cout<<"The Telephone Number is:"<<i->getNum()<<endl;
        break;
     }   
     if (i == persons.back())
     {
        cout<<"Invalid Name!!\n";
        break;
     }
    }
}

// Find name by number
void findName(vector<Person*> &persons , int num){
    for (auto &&i : persons)
    {
        if (i->getNum() == num)
        {
            cout<<"The Name is:"<<i->getName()<<endl;
            break;
        }
        if(i == persons.back()){
            cout<<"Invalid Number!!\n";
            break;
        }
    }
}

int main(){
    int choice;
    vector<Person*> persons;
    loadFile(persons);
    do
    {
        menuDisplay();
        cout<<"Enter Your Choice:";
        cin>>choice;
        switch (choice)
        {
        case 1:{
            string name;
            cout<<"\n Find Person Number By Name\n";
            cout<<"Enter Name:";
            cin>>name;
            findNum(persons,name);
            break;
        }
        case 2:{
            int num;
            cout<<"\n Find Person Name By Number\n";
            cout<<"Enter Telephone Number:";
            cin>>num;
            findName(persons,num);
            break;
        }
        case 3:{
            string name;
            int num;
            cout<<"\n Add New Person\n";
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter Telephone Number:";
            cin>>num;
            persons.push_back( new Person(name,num));
            break;
        }
        case 4:{
            int num;
            cout<<"\n Delete Person\n";
            displayPersons(persons);
            cout<<"Enter Person Number:";
            cin>>num;
            if (num > 0 && num <= persons.size())
            {
                delete persons[num-1];
                persons.erase(persons.begin() + num - 1);
                cout<<"Deleted Successfully!!\n";
            }
            else
            {
                cout<<"Invalid Number!!\n";
            }
            break;
        }
        case 5:
            cout<<"Exiting...\n";
            break;
        default:
            break;
        }
        /* code */
    } while ( choice != 5 );

    // Save any change into the file
    reloadfile(persons);
    // Delete all allocated memory and clear the vector
    for (auto &&i : persons)
    {
        delete i;
    }
    persons.clear();
    
    return 0;
}