#include <iostream>
#include <math.h>

int main(){

	float a,b, Area;

	std::cout << "Please enter the value for the base of Triangle: ";
	std::cin >> a;
	std::cout << "Please enter the value for the height of Triangle: ";
	std::cin >> b;
    std::cout<<"The Area Of The Triangle = " << a*b/2 << std::endl;

    return 0;
}