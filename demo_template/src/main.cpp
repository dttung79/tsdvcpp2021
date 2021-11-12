#include <iostream>
#include "fraction.h"
#include "myarray.h"

using namespace std;

template<class T>
T mymax(const T&a, const T&b)
{
	return a > b ? a : b;
}

int main(int argc, char *argv[])
{
	int a = 5, b = 6;
	cout << "Max integer: " << mymax<int>(a, b) << endl;

	double x = 10.0, y = 3.0;
	cout << "Max double: " << mymax<double>(x, y) << endl;

	Fraction f1(2, 3), f2(3, 4);
	cout << "Max fraction: " << mymax<Fraction>(f1, f2) << endl;

	Array<int> arr(5);
	for (int i = 0; i < 5; i++) arr[i] = i;
	int index;
	try 
	{
		cout << "Enter index: "; cin >> index;
		cout << "arr[" << index << "] = " << arr[index] << endl;
	}
	catch (const char* msg)
	{
		cout << msg << endl;
	}
}