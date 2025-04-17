#include<iostream>

bool checkPrimeNum (int num){
    if (num < 2 && num >= 0 )
    {
        return false;
    }
    else if  (num == 2)
    {
        return true;
    } 
    else
    {
        for (size_t i = 2; i < num; i++)
        {
            if (num%i == 0 )
            {
                return false;
            }
        
        }  
        return true;      
    }
}




int main(){

    int num ;
    bool result;

    std::cout<<"*** Program to find whether given number is a prime number or not *** \n";
    std::cout<<"Enter The Number: \n";
    std::cin>>num;

    result= checkPrimeNum(num);

    if (result == true)
    {
        std::cout<<"The Number is a Prime Number\n";
    }
    else
    {
        std::cout<<"The Number is not a Prime Number\n";
    }
    
    return 0;
}