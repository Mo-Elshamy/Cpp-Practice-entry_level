#ifndef PUBLICATION_HPP
#define PUBLICATION_HPP

class Publication
{
private:
    std::string title;
    float price;

public:
    Publication():price(0) {}
    ~Publication() {}
    void setTitle(std::string title){ this->title = title;}
    void setPrice(float price){this->price = price;}
    std::string getTitle(){return title;}
    float getPrice(){return price;}
};


class Book: public Publication 
{
private:
    int page;
public:
    Book():page(0) {}
    ~Book() {}
    void setPage(int page){this->page=page;}
    int getPage(){return page;}
};

class Tape: public Publication
{
private:
    float minutes;
public:
    Tape():minutes(0) {}
    ~Tape() {}
    void setMinutes(float minutes){this->minutes=minutes;}
    float getMinutes(){return minutes;}
};

#endif