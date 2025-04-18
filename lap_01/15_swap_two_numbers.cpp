#include <iostream>

int main() {

    float num_1 , num_2 , temp ;

    std::cout<<"**Swap Two Numbers**\n";

    std::cout<<"Enter The first num : ";
    std::cin>>num_1;
    std::cout<<"\nEnter The second num : ";
    std::cin>>num_2;

    temp = num_1;
    num_1 = num_2;
    num_2 = temp;

    std::cout<<"\nThe first value is : " << num_1 << "\nThe second value is : " << num_2 << std::endl;
    return 0;
}
