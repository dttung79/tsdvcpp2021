#include <iostream>
#include "shape.h"
using namespace std;

int main(int argc, char *argv[])
{
	Shape s1;
	cout << s1 << endl;

	Shape s2("S2");
	cout << s2 << endl;

	Circle c1;
	cout << c1 << endl;

	Circle c2("C2", 5.0);
	cout << c2 << endl;


	Shape *c3 = new Circle("C3", 4.0);
	cout << *c3 << endl;

	delete c3;
}