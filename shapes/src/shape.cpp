#include "shape.h"
Shape::Shape() 
{
    name = "No name";
}

Shape::Shape(const string &name) 
{
    this->name = name;
}

double Shape::area() const
{
    return 0.0;
}

ostream& operator<<(ostream& os, const Shape &s) 
{
    s.print(os);
    return os;
}

void Shape::print(ostream &os) const
{
    os << "Name: " << name << ", area: " << area();
}

// void Shape::print() const
// {
//     cout << "Name: " << name << ", area: " << this->area();
// }

Shape::~Shape()
{
    // cout << "Delete Shape" << endl;
}




