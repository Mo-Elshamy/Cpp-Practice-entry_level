#include <iostream>
#include <vector>
#include <iomanip>
#include"2_employee.hpp"
#include <string>
using namespace std;



void displayMenu() {
    cout << "\n*** Employee Management System ***" << endl;
    cout << "1. Add Employee Details" << endl;
    cout << "2. Display Employee Details" << endl;
    cout << "3. Display Monthly Salary" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<employee> employees;
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        

        switch(choice) {
            case 1: {
                employee newEmp;
                string id;
                string name;
                double salary;
                
                cout << "\n--- Add Employee ---" << endl;
                cout << "Enter Employee ID: ";
                cin >> id;
                newEmp.setEmployee_ID(id);
                
                cout << "Enter Employee Name: ";
                cin.ignore();
                getline(cin, name);
                newEmp.setEmployee_Name(name);

                cout << "Enter Total Work Hours: ";
                cin >> salary;
                newEmp.setNo_of_HoursWork(salary);
                
                cout << "Enter Rate Per Hour Salary: ";
                cin >> salary;
                newEmp.setRate_per_Hour(salary);
                
                employees.push_back(newEmp);
                cout << "\nEmployee added successfully!" << endl;
                break;
            }
            
            case 2: {
                cout << "\n--- Employee Details ---" << endl;
                if(employees.empty()) {
                    cout << "No employees found!" << endl;
                } else {
                    for(employee &emp : employees) {
                        cout << "ID: " << emp.getEmployee_ID() << endl;
                        cout << "Name: " << emp.getEmployee_Name() << endl;
                        cout << "Working Hours = " << emp.getNo_of_HoursWork() << endl;
                        cout << "---------------------" << endl;
                    }
                }
                break;
            }
            
            case 3: {
                cout << "\n--- Monthly Salary ---" << endl;
                if(employees.empty()) {
                    cout << "No employees found!" << endl;
                } else {
                    for(employee &emp : employees) {
                        cout << "ID: " << emp.getEmployee_ID() << endl;
                        cout << "Name: " << emp.getEmployee_Name() << endl;
                        cout << "Monthly Salary: $"<< emp.getTotal_Monthly_Salary() << endl;
                        cout << "---------------------" << endl;
                    }
                }
                break;
            }
            
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
        
    } while(choice != 4);

    return 0;
}