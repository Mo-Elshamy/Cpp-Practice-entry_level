#include<iostream>


int main(){

    int arr[10], temp[10], count =0 , pose , value;
    std::cout<<"*** Delete an element from an array ***\n";


    std::cout<<"Enter the array elements\n";

    for (size_t i = 0; i < 10; i++)
    {
        std::cin>>temp[i];
    }

    std::cout<<"Enter the position for the Deleted element\n";
    std::cin>>pose;

    for (size_t i = 0; i < 9; i++)
    {
        if (i == pose-1)
        {   
            count++;
            arr[i] = temp[count];
            count++;
        }
        else
        {
            arr[i] = temp[count];
            count++; 
        }
    }
    
    std::cout<<"The Array arr= ";   
    for (size_t i = 0; i < 9; i++)         // Dispaly the array
    {   
        if (i == 0)
        {
            std::cout<<"["<<arr[i];
        }
        else if (i == 8)
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