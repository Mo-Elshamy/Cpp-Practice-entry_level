#include "area.hpp"



// Shape
Shape::Shape()
{
    base = 0;
    height = 0;
}
Shape::~Shape(){}
void Shape::get_data(double l, double w)
{
    base = l;
    height = w;
}
void Shape::get_data(double r)
{
    base = r;
}
double Shape::display_area(){
    return 0;
}


// Triangle
Triangle::Triangle(){};
Triangle::~Triangle(){};
double Triangle::display_area()
{
    return (base * height) / 2;
}

// Rectangle
Rectangle::Rectangle(){};
Rectangle::~Rectangle(){};
double Rectangle::display_area()
{
    return base * height;
}

// Circle
Circle::Circle(){};
Circle::~Circle(){};
double Circle::display_area()
{
    return 3.14 * base * base;
}

