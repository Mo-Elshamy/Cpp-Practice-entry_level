#include <iostream>

float circumference( float radius){ // Circle
    double pi = 3.14;
    return 2*radius*pi;
}
float circumference( double side){ // Square
    return 4*side;
}
float circumference( float length , float width ){ // Rectangle
    return 2*(length+width);
}
float circumference( float side1 , float side2 , float side3){ // Triangle
    return side1+side2+side3;
}


int main(){
    int selection;
    std::cout<<"*** calculate circumference of Circle , triangle , square and rectangle using function overloading *** \n";
    
    std::cout<<"Chose the figure from the list : \n[1] Circle \n[2] Triangle \n[3] Square \n[4] Rectangle\n";
    std::cin>>selection;


    switch (selection)
    {
    case 1:
        float radius;
        std::cout<<"Enter the radius: \n";
        std::cin>>radius;
        std::cout<<"The circumference of the Circle  = "<< circumference(radius)<<"\n";
        break;
    case 2:
        float side1 , side2 , side3;
        std::cout<<"Enter the First side: \n";
        std::cin>>side1;
        std::cout<<"Enter the Second side: \n";
        std::cin>>side2;
        std::cout<<"Enter the Third side: \n";
        std::cin>>side3;
        std::cout<<"The circumference of the Triangle  = "<< circumference(side1 , side2 , side3)<<"\n";
        break;
    case 3:
        double side;
        std::cout<<"Enter the Side: \n";
        std::cin>>side;
        std::cout<<"The circumference of the Square  = "<< circumference(side)<<"\n";
        break;
    case 4:
        float length , width;
        std::cout<<"Enter the length: \n";
        std::cin>>length;
        std::cout<<"Enter the width: \n";
        std::cin>>width;
        std::cout<<"The circumference of the Triangle  = "<< circumference(length , width)<<"\n";
        break;
    default:
        std::cout<<"Invalid Number\n";
        break;
    }
    
    return 0;
}