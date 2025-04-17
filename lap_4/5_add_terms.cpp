#include <iostream>

int main() {
    float result = 0;

    std::cout << "*** Program to add first seven terms of the following series using for loop: `1/!1 + 2/!2 + 3/!3 + ...` ***\n";

    for (float i = 1.0; i <= 7; i++) {
        float product = 1.0; 
        for (float j = 1.0; j <= i; j++) {
            product *=  j;
        }
        result += i/product;
    }

    std::cout << "The Sum is: " << result << "\n";
    return 0;
}