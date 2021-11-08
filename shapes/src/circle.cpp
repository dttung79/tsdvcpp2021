#include "shape.h"

Circle::Circle() 
{
    name = "No name";
    radius = 1.0;
}

Circle::Circle(const string &name, const double &radius) 
{
    this->name = name;
    this->radius = radius;
}

double Circle::area() const
{
    return PI * radius * radius;
}

ostream& operator<<(ostream& os, const Circle &c) 
{
    c.print(os);
    return os;
}

// Circle::~Circle()
// {
//     cout << "Delete circle" << endl;
// }