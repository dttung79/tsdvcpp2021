#pragma once
#include "shape.h"

#define EXIT 0


class MenuProgram
{
    public:
        void run();
    protected:
        virtual void printMenu() const = 0; // no implementation
        int getChoice() const;
        virtual void doTask(const int &choice) = 0; // no implementation
};

#define CIRCLE 1
#define RECTANGLE 2
#define SQUARE 3
#define PRINT 4
#define NSHAPES 100

class ShapeDemo : public MenuProgram
{
    public:
        ShapeDemo();
        ~ShapeDemo();
    private:
        Shape* shapes[NSHAPES];
        int nShapes;
    protected:
        void printMenu() const;
        void doTask(const int &choice);
    private:
        void addCircle();
        void addRectangle();
        void addSquare();
        void printAll();
        void exitProgram();
        void showError();
};