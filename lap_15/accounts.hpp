#ifndef ACCOUNTS_HPP
#define ACCOUNTS_HPP

#include <iostream>

class Account
{
private:
    std::string name;
    std::string acc_num;
    std::string acc_type;
public:
    Account() {}
    ~Account() {}
    void setCustomer_Name(std::string name){this->name = name;}
    void setAccount_Number(std::string acc_num){this->acc_num = acc_num;}
    void setAccount_Type(std::string acc_type){this->acc_type = acc_type;}
    std::string getCustomer_Name(){return name;}
    std::string getAccount_Number(){return acc_num;}
    std::string getAccount_Type(){return acc_type;}
};



class Curr_Acct: public Account
{
private:
    double amount;
    double penalty;
public:
    Curr_Acct():amount(0),penalty(2) {}
    ~Curr_Acct() {}
    void Deposit(double amount){
        this->amount += amount;
    }
    double Balance(){
        return amount;
    }
    void withdraw(double amount){
        if (this->amount<amount)
        {
            std::cout<<"There Is NO Enough Money!\n";
        }
        else   
        {
            this->amount -= amount; 
        }

        if (this->amount<100)
        {
            Penalty();
        }
    }
    void Penalty(){this->amount -= penalty;}
};

class SAV_ACCT :public Account
{
private:
    double amount;
public:
    SAV_ACCT() {}
    ~SAV_ACCT() {}
    void Deposit(double amount){
        this->amount += amount;
    }
    void Balance(){
        std::cout<<"The Balance is: "<<amount<<std::endl;
        std::cout<<"The Interest is: "<<Compute_Interest()<<std::endl;
        std::cout<<"The Balance With Interest is: "<<amount+Compute_Interest()<<std::endl;
    }
    double Compute_Interest(){
        return amount*0.04;
    }
    void withdraw(double amount){
        if (this->amount<amount)
        {
            std::cout<<"There Is NO Enough Money!\n";
        }
        else   
        {
            this->amount -= amount; 
        }
    }
    
};

#endif