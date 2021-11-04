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
        static int count;
    public:
        // default constructor
        LightBulb();
        // parameter constructor
        LightBulb(const bool &light, const string &name);
        LightBulb(const LightBulb &bulb); // copy constructor
        // methods
        void turnOn();
        void turnOff();
        bool isOn();
        bool getLight();
        ~LightBulb();
        static int getCount();
};