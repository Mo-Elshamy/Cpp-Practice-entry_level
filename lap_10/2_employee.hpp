#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP


class employee
{
private:
    std::string employeeID;
    std::string employeeName;
    int numHoursWork;
    int ratePerHour;

public:
    void setEmployee_ID(std::string id){employeeID = id;}
    std::string getEmployee_ID(){return employeeID;}
    void setEmployee_Name(std::string name){employeeName = name;}
    std::string getEmployee_Name(){return employeeName;}
    void setNo_of_HoursWork(int hr){numHoursWork = hr;}
    int getNo_of_HoursWork(){return numHoursWork;}
    void setRate_per_Hour(int rateHour){ratePerHour = rateHour;}
    int getRate_per_Hour(){return ratePerHour;}
    double getTotal_Monthly_Salary(){
        return numHoursWork*ratePerHour;
    }
    
};

#endif