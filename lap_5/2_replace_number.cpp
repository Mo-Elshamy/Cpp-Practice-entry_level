#include <iostream>

void swap(int &num1 , int &num2){
    int temp ;
    temp = num1;
    num1= num2;
    num2 = temp;
}

int main(){
    int num1, num2;
    std::cout<<"** Swap two values using functions **\n";

    std::cout<<"Enter The first number:\n";
    std::cin>>num1;
    std::cout<<"Enter The second number:\n";
    std::cin>>num2;
    swap(num1,num2);
    std::cout<<"The first number is = "<<num1<<"\nThe second number is = "<<num2<<"\n";
    return 0;
}