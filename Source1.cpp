#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    /*Write a program that generates a random number and asks the user to guess what the
    number is.If the user’s guess is higher than the random number, the program should
    display “Too high, try again.” If the user’s guess is lower than the random number, the
    program should display “Too low, try again.” The program should use a loop that
    repeats until the user correctly guesses the random number.Make the program keep a
    count of the number of guesses the user makes.When the user correctly guesses the
    random number, the program should display the number of guesses.*/

    srand(time(0));
    int guessActual = (rand() % 100) + 1;
    int guessNumber;
    int guessAmount = 0;
    cout << "I have generated a random number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do {
        cout << "Guess the number here: ";
        cin >> guessNumber;
        guessAmount++;

        if (guessNumber > guessActual) {
            cout << "Too high, try again." << endl;
        }
        else if (guessNumber < guessActual) {
            cout << "Too low, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number." << endl;
            cout << "It took you " << guessAmount << " guesses." << endl;
        }

    } while (guessNumber != guessActual);

    return 0;
}