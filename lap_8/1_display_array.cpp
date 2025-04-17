#include<iostream>


int main(){
    
    int arr_size = 4 , arr[arr_size]={1,2,3,4};

    std::cout<<"*** Display an array ***\n";
    for (size_t i = 0; i < arr_size; i++)
    {
        std::cout<<arr[i]<<" , ";
    }
    std::cout<<"\n";
    return 0;
}