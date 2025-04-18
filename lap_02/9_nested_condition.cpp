#include <iostream>


int main(){
    int age;
    float payment;
    char condition;

    std::cout<<"**Nested condition**\n";

    std::cout<<"Enter Your Age: \n";
    std::cin>>age;
    std::cout<<"Are You Having a Membership: (Y/N)\n";
    std::cin>>condition;

    std::cout<<"Enter your Payment:\n";
    std::cin>>payment;

    if(age >= 18 && (condition == 'y' || condition == 'Y')){
        std::cout<<"The required Cash is "<<payment*0.9<<"\n";
    }
    else{
        std::cout<<"The required Cash is "<<payment<<"\n";
    }

}