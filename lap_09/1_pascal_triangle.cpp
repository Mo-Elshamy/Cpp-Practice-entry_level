#include<iostream>


int main(){
    int temp1[10]={1,1}, temp2[10] , num , count =0;

    std::cout<<"*** Generate Pascals triangle ***\n";

    std::cout<<"Enter the Rows number {max 10}:\n";
    std::cin>>num;

    if (num > 10 || num < 1)
    {
        std::cout<<"Invalid number!\n";
        return 0;
    }
    

    for (size_t i = 0; i < num; i++)
    {
        for (size_t j = i; j < (num+1/2); j++)
        {
            std::cout<<" ";
        }
        
        for (size_t j = num +1; j > num -i ; j--)
        {
            if (j == num +1 || j == num-i+1)
            {
                temp2[count]= 1;
                temp1[count]= 1;
                std::cout<<temp2[count]<<" ";
                count++;
            }
            else
            {
                std::cout<<temp2[count-1]+temp2[count]<<" ";
                temp1[count]=temp2[count-1]+temp2[count];
                count++;
            }
        }
        count=0;
        for (size_t j = 0; j < i+1 ; j++)
        {
            if (j == 0 || j == i )
            {
                temp2[j]= 1;
            }
            else
            {
                temp2[j]=temp1[j] ;
            }
        }
        std::cout<<"\n";
    }
    

    return 0;
}