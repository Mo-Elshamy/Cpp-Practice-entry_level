#include<iostream>


int main(){
    
    int num;

    std::cout<<"Enter The Number: \n";
    std::cin>>num;

    for (size_t i = 0; i < num; i++)
    {
        for (size_t j = 1; j < num-i; j++)
        {
            std::cout<<" ";
        }
        for (size_t j = num -i ; j <= num; j++)
        {
            std::cout<<"*";
        }
        
        std::cout<<"\n";
    }
    return 0;
}