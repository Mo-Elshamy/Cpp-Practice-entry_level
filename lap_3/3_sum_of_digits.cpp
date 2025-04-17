#include <iostream>


int main(){
    int num , temp=0 , sum=0;

    std::cout<<"** Program to input a number and then calculate sum of its digits ** \n";
    
    std::cout<<"Enter the number:";
    std::cin>>num;

    while (num >= 1)
    {   
        temp = num%10;
        sum += temp;
        num = (num - temp)/10;
    }

    std::cout<<"The Sum Of Digits is : "<< sum <<"\n";
    
    return 0;
}