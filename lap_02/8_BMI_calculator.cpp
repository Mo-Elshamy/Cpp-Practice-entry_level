#include<iostream>

int main(){
    float weight , height , bmi;

    std::cout<<"** BMI Calculator **\n";

    std::cout<<"Enter Your Weight:\n";
    std::cin>>weight;
    std::cout<<"Enter Your Height:\n";
    std::cin>>height;

    bmi = weight/(height*height);

    if (bmi < 18.5)
    {
        std::cout<<"Underweight\n";
    }
    else if (bmi < 24.9)
    {
        std::cout<<"Normal Weight\n";
    }
    else if (bmi < 29.9)
    {
        std::cout<<"Overweight\n";
    }
    else   
    {
        std::cout<<"Obese\n";
    }
    
    return 0 ;
}