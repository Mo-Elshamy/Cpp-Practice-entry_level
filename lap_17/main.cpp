#include"area.hpp"
#include <iostream>

using namespace std;

void display_menu()
{
    cout << "Choose a shape to calculate the area:" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "4. Exit" << endl;
}

int main(){
    int choice;
    double l, w, r;
    Shape *shape = nullptr;
    do {
        display_menu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shape = new Triangle();
                cout << "Enter base and height: ";
                cin >> l >> w;
                shape->get_data(l, w);
                cout << "Area of Triangle: " << shape->display_area() << endl;
                break;
            case 2:
                shape = new Rectangle();
                cout << "Enter length and width: ";
                cin >> l >> w;
                shape->get_data(l, w);
                cout << "Area of Rectangle: " << shape->display_area() << endl;
                break;
            case 3:
                shape = new Circle();
                cout << "Enter radius: ";
                cin >> r;
                shape->get_data(r);
                cout << "Area of Circle: " << shape->display_area() << endl;
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        delete shape; // Free the allocated memory
    } while (choice != 4);

    return 0;
}