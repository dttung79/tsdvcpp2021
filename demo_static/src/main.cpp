#include <iostream>
#include "test.h"

using namespace std;

int global_a = 10;

void access_global();
void access_static();

int main(int argc, char *argv[])
{
	access_global(); // in ra 10, a -> 11
	access_static(); // in ra 11, 0, a-> 12, b->1
	access_static(); // in ra 12, 1, a-> 13, b->2
	cout << global_a << endl;
	//cout << static_b << endl;
}

void access_global() 
{
    cout << global_a++ << endl;
}

void access_static() 
{
	static int static_b = 0;
    cout << global_a++ << endl;
    cout << static_b++ << endl;
}