#include "lightbulb.h"
#include <iostream>
using namespace std;


LightBulb::LightBulb()
{
    light = OFF;
    name = "Living Room";
    cout << "A light bulb is created" << endl;
}

LightBulb::LightBulb(const bool &light, const string &name)
{
    this->light = light;
    this->name = name;
    cout << "A light bulb is created with light ";
    cout << (light ? "on" : "off") << endl;
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
    cout << "A lightbulb " << name << " is deleted" << endl;
}