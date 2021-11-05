#include <iostream>
#include "fraction.h"
using namespace std;

int main(int argc, char *argv[])
{
	Fraction f1(2, 3);
	Fraction f2(4, 6);
	if (f1 == f2) cout << f1 << " = " << f2 << endl;
	else 		  cout << f1 << " != " << f2 << endl;

	Fraction f3 = f1 + f2;
	cout << f1 << " + " << f2 << " = " << f3 << endl;

}