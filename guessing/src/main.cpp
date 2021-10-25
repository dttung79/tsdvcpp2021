#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char *argv[])
{
	srand(time(NULL));
	int n = rand() % 100 + 1;
	bool notGameOver = true;
	int guess;
	while (notGameOver)
	{
		cout << "Enter your guess: ";
		cin >> guess;

		if (guess < n) cout << "Your number is less than mine!"    << endl;
		else if (guess > n) cout << "Your number is greater than mine!" << endl;
		else 
		{
			cout << "Correct! You win!" << endl;
			cout << "Do you want to continue (1-Yes, 2-No): ";
			int choice;
			cin >> choice;
			if (choice) n = rand() % 100 + 1;
			else notGameOver = false;
		}
	}
}