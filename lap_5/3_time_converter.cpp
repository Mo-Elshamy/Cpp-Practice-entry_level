#include <iostream>

float timeConverter(int &hrs , int &mins , int &sec){
    return (hrs*60+mins+(sec/60));
}

int main(){
    int hrs, mins,sec;
    std::cout<<"** Convert time to minutes using functions **\n";

    std::cout<<"Enter The Hours:\n";
    std::cin>>hrs;
    std::cout<<"Enter The Minutes:\n";
    std::cin>>mins;
    std::cout<<"Enter The Seconds:\n";
    std::cin>>sec;
    std::cout<<"The Total time in Minutes is ="<<timeConverter(hrs,mins,sec)<<"\n";
    return 0;
}