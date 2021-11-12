#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> a;
	for (int i = 0; i < 5; i++) 
		a.push_back(i+1);

	for (int i = 0; i < a.size(); i++) 
		cout << a[i] << endl;
}

