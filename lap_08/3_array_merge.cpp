#include<iostream>


int main(){
    int temp ,count=0, a1[10] = {25, 27, 32, 98} ,a2[10] = {12, 23, 28, 51, 72, 85, 97} , a3[20];
    std::cout<<"*** Merge sorted arrays ***\n";

    for (size_t i = 0; i < 4; i++)  // merge the first array 
    {
        a3[count] = a1[i];
        count++;
    }
    for (size_t i = 0; i < 7; i++)  // merge the Second array 
    {
        a3[count] = a2[i];
        count++;
    }

    for (size_t i = 1; i <= 11; i++)        // sort the merged array
    {   
        for (size_t j = i; j < 11; j++)
        {
            if (a3[j] < a3[i-1] )
            {
                temp = a3[i-1];
                a3[i-1] = a3[j];
                a3[j]=temp;
            }
        }
    }
    std::cout<<"The Array a3= ";   
    for (size_t i = 0; i < 11; i++)         // Dispaly the array
    {   
        if (i == 0)
        {
            std::cout<<"["<<a3[i];
        }
        else if (i == 10)
        {
            std::cout<<","<<a3[i]<<"]";
        }
        else
        {
            std::cout<<","<<a3[i];
        }
    }
    std::cout<< "\n";
    return 0;
}