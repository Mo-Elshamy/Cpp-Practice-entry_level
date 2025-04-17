#include<iostream>


int main(){
    
    int num;

    std::cout<<"Enter The Number: \n";
    std::cin>>num;

    for (size_t i = 0; i < num; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    for (size_t i = 0; i < num; i++)
    {
        for (int j = num-i-1; j >= 0; j--)
        {
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}