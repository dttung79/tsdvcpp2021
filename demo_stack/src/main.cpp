#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool is_open(const char& c)
{
	// TODO
}
bool is_close(const char& c)
{
	// TODO
}
bool check_parentheses(const string &expression)
{
	stack<char> parentheses;
	for (int i = 0; i < expression.length(); i++)
	{
		char c = expression.at(i);
		// TODO
	}
	// TODO
}
int main(int argc, char *argv[])
{
	cout << "Enter an expression to check: " << endl;
	string exp;
	cin >> exp;
	if (check_parentheses(exp)) cout << "Valid" << endl;
	else cout << "Invalid" << endl;
}