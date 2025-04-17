#include <iostream>
#include <math.h>

int main(){

	float a, Area;

	std::cout << "Please enter the value for the side of Triangle: ";
	std::cin >> a;

    std::cout<<"The Area Of The Triangle = " << sqrt(3)*a*a/4 << std::endl;

    return 0;
}