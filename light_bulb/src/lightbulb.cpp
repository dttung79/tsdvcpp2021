#include "lightbulb.h"
#include <iostream>
using namespace std;

// initialize static attribute
int LightBulb::count = 0;

LightBulb::LightBulb()
{
    light = OFF;
    name = "Living Room";
    cout << "A light bulb is created" << endl;
    count++;
}

LightBulb::LightBulb(const bool &light, const string &name)
{
    this->light = light;
    this->name = name;
    cout << "A light bulb is created with light ";
    cout << (light ? "on" : "off") << endl;
    count++;
}

void LightBulb::turnOn()
{
    light = ON;
    cout << "Light is turned on!" << endl;
}
void LightBulb::turnOff()
{
    light = OFF;
    cout << "Light is turned off!" << endl;
}

bool LightBulb::isOn()
{
    return light;
}

LightBulb::~LightBulb()
{
    count--;
    cout << "A lightbulb " << name << " is deleted" << endl;
}

LightBulb::LightBulb(const LightBulb &bulb)
{
    this->light = bulb.light;
    this->name = "No name";
    count++;
} // copy constructor

int LightBulb::getCount()
{
    // cout << name << endl; // error because name is not static
    return count;
}