#include <iostream>


int main(){
    int num;

    std::cout<<"**Check Whether a Number is Even or Odd**n \n";

    std::cout<<"Enter The Value: \n";
    std::cin>>num;

    if ( num%2 == 0 )
    {
        std::cout<<"The Number is an even number\n";
    }
    else
    {
        std::cout<<"The Number is an odd number\n";
    }
    

    return 0;
}
