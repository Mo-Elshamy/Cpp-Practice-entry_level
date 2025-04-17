#include<iostream>

float area( float radius){
    double pi = 3.14;
    return radius*radius*pi;
}
float area( double side){
    return side*side;
}
float area( float length , float width ){
    return length*width;
}
float area( double base , float height){
    return 0.5*base*height;
}


int main(){
    int selection;
    std::cout<<"*** calculate area of Circle , triangle , square and rectangle using function overloading *** \n";
    
    std::cout<<"Chose the figure from the list : \n[1] Circle \n[2] Triangle \n[3] Square \n[4] Rectangle\n";
    std::cin>>selection;


    switch (selection)
    {
    case 1:
        float radius;
        std::cout<<"Enter the radius: \n";
        std::cin>>radius;
        std::cout<<"The Area of the Circle  = "<< area(radius)<<"\n";
        break;
    case 2:
        double base;
        float height;
        std::cout<<"Enter the base: \n";
        std::cin>>base;
        std::cout<<"Enter the height: \n";
        std::cin>>height;
        std::cout<<"The Area of the Triangle  = "<< area(base , height)<<"\n";
        break;
    case 3:
        double side;
        std::cout<<"Enter the Side: \n";
        std::cin>>side;
        std::cout<<"The Area of the Square  = "<< area(side)<<"\n";
        break;
    case 4:
        float length , width;
        std::cout<<"Enter the length: \n";
        std::cin>>length;
        std::cout<<"Enter the width: \n";
        std::cin>>width;
        std::cout<<"The Area of the Rectangle  = "<< area(length , width)<<"\n";
        break;
    default:
        std::cout<<"Invalid Number\n";
        break;
    }
    
    return 0;
}