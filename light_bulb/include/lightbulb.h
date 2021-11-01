// #ifndef _LIGHT_BULB_H
// #define _LIGHT_BULB_H

// #endif
#pragma once
#define ON true
#define OFF false
#include <string>
using namespace std;

class LightBulb
{
    // attributes
    private:
        bool light;
        string name;
    public:
        // default constructor
        LightBulb();
        // parameter constructor
        LightBulb(const bool &light, const string &name);
        // methods
        void turnOn();
        void turnOff();
        bool isOn();

        ~LightBulb();
};