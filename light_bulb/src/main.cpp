#include <iostream>
#include "lightbulb.h"
using namespace std;

int main(int argc, char *argv[])
{
	LightBulb b;
	if (b.isOn()) cout << "Light is on!" << endl;
	else cout << "Light is off" << endl;

	LightBulb c(ON, "bed room");

	LightBulb *a = new LightBulb(ON, "kitchen room");
	delete a;
}