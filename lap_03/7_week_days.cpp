#include<iostream>

int main(){
    int num;

    std::cout<<"*** Display Monday to Sunday ***\n";
    std::cout<<"Enter The Day Number:\n";
    std::cin>>num;

    switch (num)
    {
    case 1:
        std::cout<<"Monday\n";
        break;
    case 2:
        std::cout<<"Tuseday\n";
        break;
    case 3:
        std::cout<<"Wednesday\n";
        break;
    case 4:
        std::cout<<"Thursday\n";
        break;
    case 5:
        std::cout<<"Friday\n";
        break;
    case 6:
        std::cout<<"Saturday\n";
        break;
    case 7:
        std::cout<<"Sunday\n";
        break;
    default:
        std::cout<<"Invalid Number\n";
        break;
    }

    return 0;
}