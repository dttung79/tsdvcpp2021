#pragma once
#include <stdlib.h>
using namespace std;

class DivisionByZeroException : public exception
{
    public:
        const char* what() const throw()
        {
            return "Error: division by zero!";
        }
};