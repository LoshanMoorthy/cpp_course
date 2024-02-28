#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int n = 100;

    // Generates a number between 0 and n - 1
    int number_to_guess = rand() % n;

    int user_guess = -1;
    int guess_counter = 0;

    cout << "Guess the number between 0 and " << n - 1 << ".\n";

    while (number_to_guess != user_guess) {
        cout << "Enter a guess\n";
        cin >> user_guess;
        guess_counter++;

        if (user_guess > number_to_guess)
            cout << "You've guessed higher!\n";
        else if (user_guess < number_to_guess)
            cout << "You've guessed lower!\n";
        else
            cout << "You've guessed correct! in " << guess_counter << " guesses\n";
    }

    return 0;
}
