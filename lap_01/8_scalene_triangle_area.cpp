#include <iostream>
#include <math.h>

int main(){

	float a, b, c, S, Area;

	std::cout << "Please enter the values for the first side of Triangle: ";
	std::cin >> a;
	std::cout << "Please enter the values for the second side of Triangle: ";
	std::cin >> b;
	std::cout << "Please enter the values for the third side of Triangle: ";
	std::cin >> c;

    S = (a+b+c)/2;
    std::cout<<"The Area Of The Triangle = " << sqrt(S*(S-a)*(S-b)*(S-c)) << std::endl;

    return 0;
}