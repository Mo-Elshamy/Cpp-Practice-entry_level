#include<iostream>


int main(){

    float salary ;
    std::cout<<"*** Taxes Calculator ***\n";

    std::cout<<"Enter the Salary\n";
    std::cin>>salary;
    if (salary <= 1500)
    {
        std::cout<<"The Taxes is 0%\n"<<"The Salary After Taxes = "<<salary<<"$\n";

    }
    else if (salary <= 3000)
    {
        std::cout<<"The Taxes is 10%\n"<<"The Salary After Taxes = "<<salary*0.9<<"$\n";
    }
    else if (salary <= 5000)
    {
        std::cout<<"The Taxes is 20%\n"<<"The Salary After Taxes = "<<salary*0.8<<"$\n";
    }
    else if (salary > 5000)
    {
        std::cout<<"The Taxes is 30%\n"<<"The Salary After Taxes = "<<salary*0.7<<"$\n";
    }

    return 0 ;
}