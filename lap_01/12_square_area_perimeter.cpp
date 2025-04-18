#include <iostream>

int main(){
    float side;

    std::cout<<"**The Area & Perimeter of Square**\n\n";

    std::cout<<"Enter Square Side Length : \n";
    std::cin>>side;
    
    std::cout<<"The Square Area = "<<side*side<<std::endl;
    std::cout<<"The Square Perimeter = " << side*4 << std::endl;

    return 0;
}