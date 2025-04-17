#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
private:
    double length , width;
public:
    Rectangle(): length(0), width(0) {}
    ~Rectangle() {}
    double getArea(){return length*width;}
    void setLength(double length){
        this->length=length;
    }
    void setWidth(double width){
        this->width=width;
    }
    Rectangle operator+(Rectangle rec){
        Rectangle total;
        total.length = (this->width /rec.width)+(rec.length / this->length); // not a real width nor length just equation driven from the both rectangles
        total.width = this->length * rec.width;
        return total;
    }
};

#endif