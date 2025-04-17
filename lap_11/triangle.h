#ifndef TRIANGLE_H
#define TRIANGLE_H

class triangle
{
private:
    double height;
    double base;
public:
    triangle():height(0),base(0) {}
    ~triangle() {}

    void setHeight(double h){ height = h;}
    double getHeight(){return height;}
    void setBase(double b){base = b;}
    double getBase(){return base;}
    double getArea(){return 0.5*base*height;}
    double getPerimeter(){return height+base+sqrt(pow(height,2)+pow(base,2));}
};


#endif