#include <iostream>
#include "utils.h"

using namespace std;


int main(int argc, char *argv[])
{
	// int x = 10, y = 20;
	// swap(x, y);
	// cout << x << ", " << y << endl;
	const int a = 4;
	int b = 5;

	cout << sum1(a, b) << endl;
	cout << sum2(a, b) << endl;
	cout << sum(a, b) << endl;
	return 0;
}


void swap(int &a, int &b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}


int sum1(int a, int b)
{
	swap(a, b);
	return a + b;
}
int sum2(const int a, const int b)
{
	//swap(a, b);
	return a + b;
}
int sum(const int &a, const int &b)
{
	return a + b;
}