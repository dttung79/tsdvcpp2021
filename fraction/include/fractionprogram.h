#pragma once
#include "fraction.h"

#define EXIT 0

class FractionProgram
{
    private:
        Fraction f1;
        Fraction f2;
    public:
        void run();
    private:
        void printMenu();
        int getChoice();
        void doTask(const int& choice);
};