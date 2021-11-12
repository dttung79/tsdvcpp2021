#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool is_open(const char& c)
{
	return c == '(' || c == '[' || c == '{';
}
bool is_close(const char& c)
{
	// TODO
	return c == ')' || c == ']' || c == '}';
}
bool is_match(const char &open, const char &close)
{
	if (open == '(' && close == ')') return true;
	if (open == '[' && close == ']') return true;
	if (open == '{' && close == '}') return true;
	return false;
}
bool check_parentheses(const string &expression)
{
	stack<char> parentheses;
	for (int i = 0; i < expression.length(); i++)
	{
		char c = expression.at(i);
		if (is_open(c)) parentheses.push(c);
		else if (is_close(c))
		{
			if (parentheses.empty()) return false;
			char d = parentheses.top();
			parentheses.pop();
			if (!is_match(d, c)) return false;
		}
	}
	// TODO
	// if (parentheses.empty()) return true;
	// else return false;
	return parentheses.empty();
}
int main(int argc, char *argv[])
{
	cout << "Enter an expression to check: " << endl;
	string exp;
	cin >> exp;
	if (check_parentheses(exp)) cout << "Valid" << endl;
	else cout << "Invalid" << endl;
}