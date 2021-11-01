#include <iostream>
#include "game.h"
using namespace std;

int main(int argc, char *argv[])
{
	bool gameOver = false;
	// cash in money => point
	int points = cashIn();
	int nTry = 0;
	int number = generateRandomNumber();
	while (!gameOver)
	{
		int guess = guessNumber();
		nTry++;

		if (number != guess) 
			gameOver = handleIncorrectGuess(points, guess < number, nTry);
		else
			gameOver = handleCorrectGuess(points, number, nTry);
	}
	printGameSummary(points);

}