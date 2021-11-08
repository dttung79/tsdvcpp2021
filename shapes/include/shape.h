#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
    private:
        string name;
    public:
        Shape();
        Shape(const string &name);

        double area() const; // return 0.0
        // call print
        friend ostream& operator<<(ostream& os, const Shape &s);
    private:
        ostream& print(ostream &os); // print name, area
};

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle();
        Circle(const string &name, const double &radius);

        double area() const; // return pi*r*r
        // call print
        friend ostream& operator<<(ostream& os, const Circle &c);
};