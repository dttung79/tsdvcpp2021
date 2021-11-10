#pragma once
#include <iostream>
#include <string>
using namespace std;

#define PI 3.14

class Shape // abstract class -> cannot create objects
{
    protected:
        string name;
    public:
        Shape();
        Shape(const string &name);

        virtual double area() const = 0; // return 0.0
        friend ostream& operator<<(ostream& os, const Shape &s);
    protected:
        void print(ostream &os) const; // print name, area
    public:
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
        friend ostream& operator<<(ostream& os, const Circle &c);
};

class Rectangle : public Shape 
{
    protected:
        double width;
        double height;
    public:
        Rectangle();
        Rectangle(const string &name, const double &width, const double &height);
        double area() const;
        friend ostream& operator<<(ostream& os, const Rectangle &r);
};

class Square : public Rectangle 
{
    public:
        Square();
        Square(const string &name, const double &side);
        friend ostream& operator<<(ostream& os, const Square &s);
};