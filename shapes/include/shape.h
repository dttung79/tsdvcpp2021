#pragma once
#include <iostream>
#include <string>
using namespace std;

#define PI 3.14

class Shape
{
    protected:
        string name;
    public:
        Shape();
        Shape(const string &name);

        virtual double area() const; // return 0.0
        // call print
        friend ostream& operator<<(ostream& os, const Shape &s);
    protected:
        void print(ostream &os) const; // print name, area
    public:
        //virtual void print() const;
        virtual ~Shape();
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

        //~Circle();
};