#include <iostream>

int main(){

    int num_1 , num_2 , result , opreation;


    std::cout<<"**Perform basic arithmetic operations (addition, subtraction, multiplication, division) on two numbers**\n";

    std::cout<<"Select The Operation:\n\n"<< " Addition = 1\n" << " Subtraction = 2\n" << " Multiplication = 3\n" << " Division = 4\n";
    std::cin>>opreation;

    std::cout<<"Enter The First Value:\n";
    std::cin>>num_1;
    std::cout<<"Enter The Second Value:\n";
    std::cin>>num_2;

    switch (opreation)
    {
    case 1:
        std::cout<<num_1<<" + "<<num_2<<" = "<<num_1+num_2<<"\n";
        break;
    case 2:
        std::cout<<num_1<<" - "<<num_2<<" = "<<num_1-num_2<<"\n";
        break;
    case 3:
        std::cout<<num_1<<" x "<<num_2<<" = "<<num_1*num_2<<"\n";
        break;
    case 4:
        std::cout<<num_1<<" / "<<num_2<<" = "<<num_1/num_2<<"\n";
        break;
    default:
        std::cout<<"Invalid Operation Selection\n";
        break;
    }
    return 0 ;
}