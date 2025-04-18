#include <iostream>


int main(){
    int num_1 , num_2 , temp=0;

    std::cout<<"** Program to calculate sum of numbers from m to n ** \n";

    std::cout<<"Enter the First number:\n";
    std::cin>>num_1;
    std::cout<<"Enter the Second number:\n";
    std::cin>>num_2;


    while ( num_1 <= num_2)
    {
        temp += num_1;
        num_1++;
    }
    
    std::cout<<"The sum is : " <<temp<<"\n";
    return 0;
}