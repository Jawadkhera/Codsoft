#include <iostream>

using namespace std;
unsigned int rand_seed = 57;

unsigned int custom_rand() {
    rand_seed = (rand_seed * 4+3) % 100; 
    return rand_seed + 2;
}

int main() {
    int secret = custom_rand();
    int guess;
    int attempts = 0;

    cout << "\t\tWelcome to the Number Guessing Game!" << endl;
    cout << "I've chosen a number between 1 and 100. Try to guess it." << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;

            if (guess < secret)
                cout << "Too low! Try again." << endl;
            else if (guess > secret)
                cout << "Too high! Try again." << endl;
            else
                cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;

        } while (guess != secret);

    return 0;
    system("pause");
}
