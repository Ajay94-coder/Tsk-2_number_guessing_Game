#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{


    srand(time(0));

    int secret = rand() % 100 + 1;

    int guess;

    int tries = 0;

    do
    {
        cout << "Enter a guess between 1 and 100: ";
        cin >> guess;

        tries++;

        if (guess < 1 || guess > 100)
        {
            cout << "Invalid guess. Try again." << endl;
        }

        else if (guess > secret)
        {
            cout << "Your guess is too high." << endl;
        }

        else if (guess < secret)
        {
            cout << "Your guess is too low." << endl;
        }

        else
        {
            cout << "You guessed it! The secret number is " << secret << "." << endl;
            cout << "You took " << tries << " tries." << endl;
            break;
        }
    } while (guess != -1);
    return 0;
}