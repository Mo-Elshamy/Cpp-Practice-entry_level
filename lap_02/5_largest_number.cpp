#include<iostream>

int main (){

    int nums[3] , maxNum=0;

    std::cout<<"**Find the Largest Number Among Three Numbers** \n";

    std::cout<<"Enter The First Number: \n";
    std::cin>>nums[0];
    std::cout<<"Enter The Second Number: \n";
    std::cin>>nums[1];    
    std::cout<<"Enter The Third Number: \n";
    std::cin>>nums[2];

    for (auto i : nums)
    {
        if (maxNum < i)
        {
            maxNum = i ;
        }
        
    }
    
    std::cout<<"The Largest Number is :"<< maxNum << std::endl;
    return 0;
}