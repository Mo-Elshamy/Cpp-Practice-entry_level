#include "staff.hpp"
#include <iostream>
#include <string>

int main() {
    // Teacher object
    Teacher t;
    t.setName("Alice");
    t.setCode("T001");
    t.setQualification("PhD in Math");
    t.setSubject("Mathematics");
    t.setPublication("Math Journal");

    // Officer object
    Officer o;
    o.setName("Bob");
    o.setCode("O010");
    o.setQualification("MBA");
    o.setGrade("Grade A");

    // Regular typist
    Regular r;
    r.setName("Charlie");
    r.setCode("R100");
    r.setSpeed(80);
    r.setMounthlySalary(3000.0);

    // Casual typist
    Casual c;
    c.setName("Diana");
    c.setCode("C101");
    c.setSpeed(70);
    c.setDailyWages(150.0);

    // Display sample data
    std::cout << "Teacher Info:\n";
    std::cout << " Name: " << t.getName()
              << ", Code: " << t.getCode()
              << ", Qualification: " << t.getQualification()
              << ", Subject: " << t.getSubject()
              << ", Publication: " << t.getPublication() << "\n\n";

    std::cout << "Officer Info:\n";
    std::cout << " Name: " << o.getName()
              << ", Code: " << o.getCode()
              << ", Qualification: " << o.getQualification()
              << ", Grade: " << o.getGrade() << "\n\n";

    std::cout << "Regular Typist Info:\n";
    std::cout << " Name: " << r.getName()
              << ", Code: " << r.getCode()
              << ", Speed: " << r.getSpeed()
              << " wpm, Monthly Salary: " << r.getMounthlySalary() << "\n\n";

    std::cout << "Casual Typist Info:\n";
    std::cout << " Name: " << c.getName()
              << ", Code: " << c.getCode()
              << ", Speed: " << c.getSpeed()
              << " wpm, Daily Wages: " << c.getDailyWages() << "\n";

    return 0;
}
