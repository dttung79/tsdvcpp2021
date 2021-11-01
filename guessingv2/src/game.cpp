#include "game.h"
#include <iostream>
using namespace std;

int cashIn()
{
    int money;
    cout << "Enter amount of money: ";
    cin >> money;

    cout << "Cash back: $" << money % CONVERT_RATE << endl;
    cout << "Your points is: " << money / CONVERT_RATE << endl;

    return money / CONVERT_RATE;
}

int generateRandomNumber()
{
    srand(time(NULL));
    int n = MIN + rand() % MAX;
    cout << "DEBUG: " << n << endl;
    return n;
}

int guessNumber()
{
    int number;
    cout << "Which number do you guess: ";
    cin >> number;
    return number;
}
bool handleIncorrectGuess(int &points, const bool &lessThan, const int &nTry)
{
    points -= INCORRECT_POINTS;

    if (lessThan) cout << "Your number is less than computer's" << endl;
    else          cout << "Your number is greater than computer's" << endl;

    cout << "Your points: " << points << endl;
    cout << "Number of tries: " << nTry << endl;

    if (points <= 0)
    {
        cout << "You're out of points. Cash more (1-yes, 0-no)? ";
        int answer;
        cin >> answer;
        if (answer == 1) points = cashIn();
        return answer == 0;
    }
    return false;
}

bool handleCorrectGuess(int &points, int &number, int &nTry)
{
    points += CORRECT_POINTS;
    cout << "CORRECT!" << endl;
    cout << "Your points: " << points << endl;
    cout << "Number of tries: " << nTry << endl;
    cout << "Keep playing? (1-yes, 0-no): ";
    int answer;
    cin >> answer;
    if (answer == 1)
    {
        number = generateRandomNumber();
        nTry = 0;
        return false;
    }
    return true;
}
void printGameSummary(const int &points)
{
    cout << "GAME OVER!" << endl;
    cout << "Your points: " << points << endl;
    cout << "Your money: $" << points * CONVERT_RATE << endl;
}