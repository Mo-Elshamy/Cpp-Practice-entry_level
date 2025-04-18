#include <iostream>

int main(){
    int radius = 5;
    float pi = 3.14;

    std::cout<<"The Radius = "<< radius <<"\n";
    std::cout<<"The Area Of The Circle =" << pi*radius*radius << "\n";
    std::cout<<"The Circumference Of The Circle =" << 2*pi*radius <<"\n";

    return 0;
}