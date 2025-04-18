#include<iostream>

float sumOfSeries (float num){
    float result=0;
    for (size_t i = 1; i <= num; i++)
    {
        result+= 1.0/i;
    }
    return result;
}




int main(){

    float num, result;

    std::cout<<"*** Program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n *** \n";
    std::cout<<"Enter The Number: \n";
    std::cin>>num;

    result= sumOfSeries(num);
    std::cout<<"The Sum is : "<< result << "\n";

    return 0;
}