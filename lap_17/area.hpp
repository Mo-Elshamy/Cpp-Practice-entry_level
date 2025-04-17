#ifndef AREA_HPP
#define AREA_HPP


class Shape
{
protected:
    double base;
    double height;
public:
    Shape();
    ~Shape();
    void get_data(double l, double w);
    void get_data(double r);
    virtual double display_area();
};

class Triangle : public Shape
{
public:
    Triangle();
    ~Triangle();
    double display_area() override;
};

class Rectangle : public Shape
{
public:
    Rectangle();
    ~Rectangle();
    double display_area() override;
};

class Circle : public Shape
{
public:
    Circle();
    ~Circle();
    double display_area() override;
};

#endif 