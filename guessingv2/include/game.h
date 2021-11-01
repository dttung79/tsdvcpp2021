#pragma once

#define MIN 1
#define MAX 100
#define CONVERT_RATE 1000
#define INCORRECT_POINTS 1
#define CORRECT_POINTS 5

int cashIn();
int generateRandomNumber();
int guessNumber();
bool handleIncorrectGuess(int &points, const bool &lessThan, const int &nTry);
bool handleCorrectGuess(int &points, int &number, int &nTry);
void printGameSummary(const int &points);