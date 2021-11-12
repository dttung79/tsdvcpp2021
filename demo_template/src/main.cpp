#include <iostream>
#include "fraction.h"
#include "myarray.h"

using namespace std;

template<class T>
T mymax(const T&a, const T&b)
{
	return a > b ? a : b;
}
template<class T>
T mymax(T array[], const int &n)
{
	T m = array[0];
	for (int i = 1; i < n; i++)
		m = mymax(m, array[i]);
	return m;
}
int main(int argc, char *argv[])
{
	// Test mymax with different array
	int arryint[] = {4, 6, 1, 9, 10, 5};
	cout << "Max array int: " << mymax<int>(arryint, 6) << endl;
	double arrydouble[] = {4.5, 6.0, 9.1, 3.9, 10.4, 4.5};
	cout << "Max array double: " << mymax<double>(arrydouble, 6) << endl;

	int a = 5, b = 6;
	cout << "Max integer: " << mymax<int>(a, b) << endl;

	double x = 10.0, y = 3.0;
	cout << "Max double: " << mymax<double>(x, y) << endl;

	Fraction f1(2, 3), f2(3, 4);
	cout << "Max fraction: " << mymax<Fraction>(f1, f2) << endl;

	Array<int> arr(5);
	for (int i = 0; i < arr.length(); i++) arr[i] = i;
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