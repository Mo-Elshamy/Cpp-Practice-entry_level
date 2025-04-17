#include <iostream>



double power( double x , double y){
    if (y == 0)
    {
        return 1;
    }
    
    return x * power(x , y-1);
}

int main (){
    double x , y;

    std::cout<<"*** Calculate the x^y (power) using recursion ***\n";
    std::cout<<"Enter The Number x:\n";
    std::cin>>x;
    std::cout<<"Enter The Power y:\n";
    std::cin>>y;

    std::cout<<"The Result Of "<< x << " ^ "<<y << " = " << power(x,y)<<"\n";

    return 0;
}