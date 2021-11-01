#include <iostream>
using namespace std;

void print_array(int *a, const int &n);
int* create_array(const int &n);
int main(int argc, char *argv[])
{
	int *arr = create_array(5);
	print_array(arr, 5);
	delete arr;
}
int* create_array(const int &n)
{
	int *a = new int[n]; // allocate n integers in heap
	for (int i = 0; i < n; i++)
	{
		*a = i + 1;
		a++;	
	}
//		a[i] = i + 1;
	return a-n;
}
void print_array(int *a, const int &n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
