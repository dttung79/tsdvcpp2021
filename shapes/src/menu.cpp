#include "menu.h"
#include "shape.h"

#include <iostream>
using namespace std;

void MenuProgram::run() 
{
    bool running = true;
    while (running)
    {
        printMenu();
        int choice = getChoice();
        doTask(choice);
        running = choice != EXIT;
    }
}

void MenuProgram::printMenu() const
{
    // do nothing
}

int MenuProgram::getChoice() const
{
    cout << "Enter your chocie: ";
    int choice;
    cin >> choice;
    return choice;
}

void MenuProgram::doTask(const int &choice) 
{
    // do nothing
}

/*         SHAPE IMPLEMENTATION */
ShapeDemo::ShapeDemo()
{
    nShapes = 0;
}
void ShapeDemo::printMenu() const
{
    cout << "~~~~~~ DEMO SHAPE ~~~~~~" << endl;
    cout << "1. Add Circle" << endl;
    cout << "2. Add Rectangle" << endl;
    cout << "3. Add Square" << endl;
    cout << "4. Print all" << endl;
    cout << "0. Exit" << endl;
}

void ShapeDemo::doTask(const int &choice) 
{
    switch (choice)
    {
        case CIRCLE   : addCircle   (); break;
        case RECTANGLE: addRectangle(); break;
        case SQUARE   : addSquare   (); break;
        case PRINT    : printAll    (); break;
        case EXIT     : exitProgram (); break;
        default       : showError   (); break;
    }
}

void ShapeDemo::addCircle()
{
    // should ask user to enter circle's info and create new circle object instead of using default constructor
    shapes[nShapes++] = new Circle();
}

void ShapeDemo::addRectangle()
{
    shapes[nShapes++] = new Rectangle();
}

void ShapeDemo::addSquare()
{
    shapes[nShapes++] = new Square();
}
void ShapeDemo::printAll()
{
    for (int i = 0; i < nShapes; i++)
        cout << *shapes[i] << endl;
}
void ShapeDemo::exitProgram()
{
    cout << "Program quits. See you again!" << endl;
}

void ShapeDemo::showError()
{
    cout << "Invalid choice! Pelase try again!" << endl;
}

ShapeDemo::~ShapeDemo()
{
    for (int i = 0; i < nShapes; i++)
    {
        if (shapes[i] != NULL) 
        {
            delete shapes[i];
            shapes[i] = NULL;
        }
    }
}