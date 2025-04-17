#include <iostream>

int main(){
    float width, length;

    std::cout<<"The Area & Perimeter of Rectangle\n\n";

    std::cout<<"Enter Rectangle Width : \n";
    std::cin>>width;
    std::cout<<"\nEnter Rctangle Length : \n";
    std::cin>>length;
    
    std::cout<<"The Rectangle Area = "<<width*length<<std::endl;
    std::cout<<"The Rectangle Perimeter = " << (width+length)*2 << std::endl;

    return 0;
}