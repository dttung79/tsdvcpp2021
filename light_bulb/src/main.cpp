#include <iostream>
#include "lightbulb.h"
using namespace std;

int main(int argc, char *argv[])
{
	// LightBulb b;
	// if (b.isOn()) cout << "Light is on!" << endl;
	// else cout << "Light is off" << endl;

	// LightBulb c(ON, "bed room");

	// LightBulb *a = new LightBulb(ON, "kitchen room");
	// delete a;
	LightBulb a(ON, "Bed room");
	LightBulb b = a;
	LightBulb *c = new LightBulb(OFF, "Living room");

	cout << "Number of bulb: " << LightBulb::getCount() << endl;
	delete c;
	cout << "Number of bulb: " << LightBulb::getCount() << endl;
}