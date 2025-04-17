#include<iostream>


int main(){

    int arr[11], temp[10], count =0 , pose , value;
    std::cout<<"*** Insert an element to an array ***\n";


    std::cout<<"Enter the array elements\n";

    for (size_t i = 0; i < 10; i++)
    {
        std::cin>>temp[i];
    }

    std::cout<<"Enter the position for the inserted element\n";
    std::cin>>pose;
    std::cout<<"Enter the value of the inserted element\n";
    std::cin>>value;

    for (size_t i = 0; i < 11; i++)
    {
        if (i == pose-1)
        {
            arr[i]=value;
        }
        else
        {
            arr[i] = temp[count];
            count++; 
        }
    }
    
    std::cout<<"The Array arr= ";   
    for (size_t i = 0; i < 11; i++)         // Dispaly the array
    {   
        if (i == 0)
        {
            std::cout<<"["<<arr[i];
        }
        else if (i == 10)
        {
            std::cout<<","<<arr[i]<<"]";
        }
        else
        {
            std::cout<<","<<arr[i];
        }
    }
    std::cout<< "\n";
    

    return 0;
}