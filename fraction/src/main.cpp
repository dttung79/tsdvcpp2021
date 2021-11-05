#include <iostream>
#include "fraction.h"
using namespace std;

int main(int argc, char *argv[])
{
	Fraction f1, f2;
	cout << "Enter f1: "; cin >> f1;
	cout << "Enter f2: "; cin >> f2;
	
	if (f1 == f2) cout << f1 << " = " << f2 << endl;
	else 		  cout << f1 << " != " << f2 << endl;

	Fraction f3 = f1 + f2;
	cout << f1 << " + " << f2 << " = " << f3 << endl;

}