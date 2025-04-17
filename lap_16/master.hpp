#ifndef MASTER_HPP
#define MASTER_HPP

#include <string>

class Person {
private:
    std::string name;
    std::string code;
public:
    Person();
    virtual ~Person();
    virtual void setName(std::string name);
    virtual std::string getName() const;
    virtual void setCode(std::string code);
    virtual std::string getCode() const;
};

class Account : virtual public Person {
private:
    double pay;
public:
    Account();
    virtual ~Account();
    virtual void setPay(double pay);
    virtual double getPay() const;
};

class Admin : virtual public Person {
private:
    int experience;
public:
    Admin();
    virtual ~Admin();
    virtual void setExperience(int experience);
    virtual int getExperience() const;
};

class Master : public Account, public Admin {
public:
    Master();
    ~Master() override;
    void setName(std::string name) override;
    std::string getName() const override;
    void setCode(std::string code) override;
    std::string getCode() const override;
    void setPay(double pay) override;
    double getPay() const override;
    void setExperience(int experience) override;
    int getExperience() const override;
};

#endif