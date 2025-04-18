#include <iostream>


float circleArea( float r ){
    float pi = 3.14;
    return pi*r*r;
}


int main(){
    float radius;
    std::cout<<"** calculate area of a circle using functions **\n";

    std::cout<<"Enter The Radius:\n";
    std::cin>>radius;

    std::cout<<"The Area Of The Circle is = "<<circleArea(radius)<<"\n";
    return 0;
}