#include <iostream>
include "list.h"
using namespace std;

int main(int argc, char *argv[])
{
	LList myList;
	myList.insert(5);
	myList.insert(4);
	myList.insert(3);
	myList.insert(2);
	myList.insert(1);

	Node *last = myList.delete();
	cout << last->key << endl; // 1
	delete last;

	myList.print(); // [5]->[4]->[3]->[2]->[]
} 
// expect 
// delete [5]
// delete [4]
// delete [3]
// delete [2]