#include <iostream>

int GCD(int num1, int num2){
    if (num2 == 0)
        return num1;
    else
        return GCD(num2, num1 % num2);
}

int main (){
    int x ,y;

    std::cout<<"*** Find G.C.D for two integers using recursion ***\n";
    std::cout<<"Enter The First integer:\n";
    std::cin>>x;
    std::cout<<"Enter The Second integer:\n";
    std::cin>>y;
    
    std::cout<<"The G.C.D is = " << GCD(x,y)<<"\n";

    return 0;
}