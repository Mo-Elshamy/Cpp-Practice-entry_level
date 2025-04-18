#include<iostream>

double largest(float num1 , float num2 , float num3){
    std::cout<<"The largest float\n";
    float temp =num1 , nums[3]={num1,num2,num3};
    for (int i = 0; i < 3; i++)
    {
        if (nums[i] > temp)
        {
            temp = nums[i];
        }
        
    }
    return temp;
}

double largest(int num1 , int num2 , int num3){
    std::cout<<"The largest integer\n";
    int temp =num1 , nums[3]={num1,num2,num3};
    for ( int i = 0; i < 3; i++)
    {
        if (nums[i] > temp)
        {
            temp = nums[i];
        }
        
    }
    return temp;
}



int main(){
    int selection;
    std::cout<<"*** Find The Largest Among The Three *** \n";
    std::cout<<"Select The Numbers Type: \n [1] Integers \n [2] Floats \n";
    std::cin>>selection;

    switch (selection)
    {
    case 1:
        int num_1 , num_2 , num_3;
        std::cout<<"Enter the First Number:\n";
        std::cin>>num_1;
        std::cout<<"Enter the Second Number:\n";
        std::cin>>num_2;
        std::cout<<"Enter the Third Number:\n";
        std::cin>>num_3;
        std::cout<<largest(num_1 , num_2 ,num_3) << "\n";
        break;
    case 2:
        float num1 , num2 , num3;
        std::cout<<"Enter the First Number:\n";
        std::cin>>num1;
        std::cout<<"Enter the Second Number:\n";
        std::cin>>num2;
        std::cout<<"Enter the Third Number:\n";
        std::cin>>num3;
        std::cout<<largest(num1 , num2 ,num3) << "\n";
        break;
    default:
        std::cout<<"Invalid Number!\n";
        break;
    }

    return 0;
}