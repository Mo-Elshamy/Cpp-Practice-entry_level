#include<iostream>
#include<fstream>
#include<string>


using namespace std;

void dispayMenu(){
    cout << "Choose a program to run:" << endl;
    cout << " [1] Program 1" << endl;
    cout << " [2] Program 2" << endl;
    cout << " [3] Program 3" << endl;
    cout << " [4] Exit" << endl;
    cout << "Enter your choice: ";
}

// Program 1
void createFile(){
    int i = 0, count = 0;
    ofstream file1("one.txt");
    while ( count < 10)
    {
        if (i % 2 == 0 && i != 0)
        {
            file1 << i << endl;
            count++;
        }
        i++;
    }
    file1.close();

    ofstream file2("two.txt");
    for (size_t i = 1; i <= 10; i++)
    {
        file2<< i*5 << endl;
    }
    file2.close();
}
void readFile(){
    int total = 0;
    ifstream file1("one.txt");
    ifstream file2("two.txt");
    string num1 , num2;
    while (getline(file1, num1) && getline(file2, num2))
    {
        int n = stoi(num1) + stoi(num2);
        total += n;
    }
    file1.close();
    file2.close();

    ofstream file3("total.txt");
    file3 << total << endl;
    file3.close();
}

// Program 2
void createTele_list(){
    ofstream file("tele_list.txt");
    string name;
    int number;
    char choice = 'y';
    cout << "Enter name and number: " << endl;
    while (choice == 'y')
    {
        cout << "Name: ";
        cin >> name;
        cout << "Number: ";
        cin >> number;
        file << name << " " << number << endl;
        cout << "Do you want to add more? (y/n): ";
        cin >> choice;
    }
    file.close();
}
void readTele_list(){
    ifstream file("tele_list.txt");
    string name;
    int number;
    cout << "Name\tNumber" << endl;
    while (file >> name >> number)
    {
        cout << name << "\t" << number << endl;
    }
    file.close();
}

// Program 3
void createNum_list(){
    ofstream file("Numbers.txt");
    int number;
    cout << "Enter 20 numbers: " << endl;
    for (size_t i = 0; i < 20; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;
        file << number << endl;
    }
    file.close();
}
void searchNum(){
    ifstream file("Numbers.txt");
    int number;
    cout << "Enter number to search: ";
    cin >> number;
    string num;
    bool found = false;
    while (file >> num)
    {
        if (stoi(num) == number)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "Number found!" << endl;
    else
        cout << "Number not found!" << endl;
    file.close();
}

int main(){

    int choice;
    do
    {
        dispayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Program 1" << endl;
            createFile();
            readFile();
            cout << "Files created and read successfully." << endl;
            cout << "Total is stored in total.txt" << endl;
            break;
        case 2:
            cout << "Program 2" << endl;
            createTele_list();
            readTele_list();
            break;
        case 3:
            cout << "Program 3" << endl;
            createNum_list();
            searchNum();
            cout << "Number search completed." << endl<< endl;
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 4);
    
}