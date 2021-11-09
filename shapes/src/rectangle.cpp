#include "shape.h"

Rectangle::Rectangle() : Shape("No name")
{
    width = 1.0;
    height = 2.0;
}
Rectangle::Rectangle(const string &name, const double &width, const double &height) : Shape(name)
{
    this->width = width;
    this->height = height;
}
double Rectangle::area() const
{
    return width * height;
}

ostream& operator<<(ostream& os, const Rectangle &r)
{
    r.print(os);
    return os;
}

Square::Square() : Rectangle("No name", 1.0, 1.0)
{} // don't need anything else

Square::Square(const string &name, const double &side) : Rectangle(name, side, side)
{}

ostream& operator<<(ostream& os, const Square &s)
{
    s.print(os);
    return os;
}