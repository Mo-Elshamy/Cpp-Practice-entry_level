#ifndef DISTANCE_HPP
#define DISTANCE_HPP

class Distance
{
private:
    double kilometer , meter;
public:
    Distance():kilometer(0) ,meter(0) {}
    Distance(double km , double m):kilometer(km),meter(m) {}
    ~Distance() {}
    void showDistance(){
        std::cout<<" = "<<kilometer<<"."<<meter<<"Km \n";
    }
    Distance operator ==(Distance dis){
        return Distance(this->kilometer-dis.kilometer , this->meter - dis.meter);
    }    
};

#endif