#include <iostream>

int main(){
    int x=0 , y=0;

    std::cout<<"Enter value of 'X':"<<"\n";
    std::cin>>x;                          //Enter value of X
    std::cout<<"Enter value of 'Y':"<<"\n";
    std::cin>>y;                          //Enter value of Y
    
    std::cout<<"X="<<x<<" & Y="<<y<<"\n"; //Print the values 
    std::cout<<"X+Y="<<x+y<<"\n"; // Addition
    std::cout<<"X-Y="<<x-y<<"\n"; // Substraction
    std::cout<<"X*Y="<<x*y<<"\n"; // Multiplication
    std::cout<<"X/Y="<<x/y<<"\n"; // Division
    
    return 0;
}