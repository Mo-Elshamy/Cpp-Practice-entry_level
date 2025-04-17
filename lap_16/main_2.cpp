#include <iostream>
#include "master.hpp"

int main() {
    Master master;

    // Test Person methods
    master.setName("John Doe");
    master.setCode("EMP123");
    std::cout << "Name: " << master.getName() << std::endl;
    std::cout << "Code: " << master.getCode() << std::endl;

    // Test Account methods
    master.setPay(5000.0);
    std::cout << "Pay: $" << master.getPay() << std::endl;

    // Test Admin methods
    master.setExperience(5);
    std::cout << "Experience: " << master.getExperience() << " years" << std::endl;

    // Test polymorphism
    Person* personPtr = &master;
    personPtr->setName("Jane Smith");
    std::cout << "Updated Name (via Person pointer): " << personPtr->getName() << std::endl;

    return 0;
}