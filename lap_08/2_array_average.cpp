#include<iostream>


int main(){
    int total=0, arr_size = 4 , arr[arr_size]={1,2,3,4};
    double avg;
    std::cout<<"*** Find average of array elements ***\n";
    for (size_t i = 0; i < arr_size; i++)
    {
        total += arr[i] ;
    }

    avg = total/arr_size;
    std::cout<<"The Average of the array = "<<avg << "\n";

    return 0;
}