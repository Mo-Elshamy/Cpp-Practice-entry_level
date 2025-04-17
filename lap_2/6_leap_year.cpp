#include<iostream>



int main(){

    int year;

    std::cout<<"**Find if the entered year is a leap year or not**\n";

    std::cout<<"Enter The Year: \n";
    std::cin>>year;

    if(year%4 == 0){
        std::cout<<"This is a leap year\n";
    }
    else{
        std::cout<<"This is not a leap year\n";
    }

    return 0;
}