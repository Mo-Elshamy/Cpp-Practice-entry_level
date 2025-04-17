#ifndef DOLLAR_HPP
#define DOLLAR_HPP

class Dollar
{
private:
    float currency , mktrate, offrate;
public:
    Dollar():currency(0),mktrate(0),offrate(0){}
    ~Dollar() {}
    float getDollar(){return currency;}
    float getMarketPounds(){return currency * mktrate;}
    float getOfficialPounds(){return currency*offrate;}
    void setCurrency(float currency){
        this->currency=currency;
    }
    void setRates(float offrate ,float mktrate){
        this->offrate=offrate;
        this->mktrate=mktrate;
    }
    Dollar operator <<(Dollar d1){
        std::cout<<"Market Rate : "<<d1.mktrate<<" Pounds/Dollar\n";
        std::cout<<"Official Rate : "<<d1.offrate<<" Pounds/Dollar\n";
    }
};

#endif
