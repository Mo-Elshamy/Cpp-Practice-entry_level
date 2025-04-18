#include <iostream>


int main(){

    float temp ;
    char unit;

    std::cout<<"**Converts between Celsius and Fahrenheit temperatures**\n";

    std::cout<<"Enter Temperature: \n";
    std::cin>>temp;

    std::cout<<"Enter Unit (C/F) : \n";
    std::cin>>unit;

    if (unit == 'c' || unit == 'C')
    {
        std::cout<<"The Temperature is equal to "<< (temp*9/5)+32 << "F\n";
    }
    else if (unit == 'f' || unit == 'F')
    {
        std::cout<<"The Temperature is equal to "<<  (temp-32)*5/9<< "C\n";
    }
    else
    {
        std::cout<<"Invalid Temp Unit\n";
    }

    return 0;
}