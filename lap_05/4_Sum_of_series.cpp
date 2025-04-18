#include <iostream>
#include <math.h>

double sumOfSeries(int &max){
    double sum =0 , fact = 1;
    for (size_t i = 1; i <= max; i++)
    {
        fact = fact * i;
        sum += pow(i,i)/fact;
    }
    return sum;
}

int main(){
    int max;
    std::cout<<"** Sum the series **\n";

    std::cout<<"Enter The Number :\n";
    std::cin>>max;
    
    std::cout<<"The Sum is ="<<sumOfSeries(max)<<"\n";
    return 0;
}