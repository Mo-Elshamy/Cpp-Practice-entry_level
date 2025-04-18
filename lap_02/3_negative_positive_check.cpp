#include <iostream>


int main(){
    int num;

    std::cout<<"**Check Whether a Number is Positive or Negative** \n";

    std::cout<<"Enter The Value: \n";
    std::cin>>num;

    if ( num > 0 )
    {
        std::cout<<"The Number is Positive\n";
    }
    if ( num < 0 )
    {
        std::cout<<"The Number is Negative\n";
    }
    

    return 0;
}
