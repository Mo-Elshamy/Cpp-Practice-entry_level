#include<iostream>
#include"rectangle.hpp"
#include"distance.hpp"

using namespace std;


int main(){
    int selection;
    cout<<"Select Program (1 OR 2):\n";
    cin>>selection;

    if (selection == 1)
    {   
        double length , width;
        Rectangle rec1 , rec2 , rec3;
        cout<<"\n     *** Program 1 ***\n";
        cout<<"For The First Rectangle :\n"<<"Length = ";
        cin>>length;
        cout<<"Width = ";
        cin>>width;
        rec1.setLength(length);
        rec1.setWidth(width);

        cout<<"For The Second Rectangle :\n"<<"Length = ";
        cin>>length;
        cout<<"Width = ";
        cin>>width;
        rec2.setLength(length);
        rec2.setWidth(width);

        rec3 = rec1 + rec2;

        cout<<"The First Rectangle Area = "<<rec1.getArea()<<endl;
        cout<<"The Second Rectangle Area = "<<rec2.getArea()<<endl;
        cout<<"The Sum of Rectangles Area = "<<rec3.getArea()<<endl;

    }
    else if (selection == 2)
    {
        Distance dis1(2,500) , dis2(1,500), dis3;

        cout<<"     *** Program 2 ***\n";
        cout<<"The first Distance: \n";
        dis1.showDistance();
        cout<<"The Second Distance: \n";
        dis2.showDistance();
        cout<<"The Difference Distance:\n";
        dis3 = dis1 == dis2;
        dis3.showDistance();
    }
    else
    {
        cout<<"Invalid Porgram Number!";
    }
    

    return 0;
}