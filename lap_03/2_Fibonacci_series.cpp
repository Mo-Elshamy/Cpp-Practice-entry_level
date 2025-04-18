#include <iostream>


int main(){
    int num=1 , max=100 , temp=0;

    std::cout<<"** Program to print Fibonacci series up to 100 ** \n";

    while (true) {
        int next = num + temp;
        if (next > max) break;
        std::cout << " " << next;
        num = temp;
        temp = next;
    }
    
    std::cout<<"\n";
    return 0;
}