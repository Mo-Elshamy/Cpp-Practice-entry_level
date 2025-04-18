#include <iostream>



int sum(int y){
    int result=0;
    if (y == 0)
    {
        return 0;
    }
    
    return y + sum(y-1);
}

int main (){
    int x ;

    std::cout<<"*** Find sum of natural numbers using recursion ***\n";
    std::cout<<"Enter The Number:\n";
    std::cin>>x;
    

    std::cout<<"The Sum = " << sum(x)<<"\n";

    return 0;
}