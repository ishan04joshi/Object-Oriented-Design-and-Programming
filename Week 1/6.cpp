#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;
int main()
{
    int op = 0;
    int number = 0;
    while (op != 1)
    {
        int guess;
        cout << "Take a guess: ";
        cin >> guess;
        srand(time(0));
        number = rand() % 9 + 1;
        if (guess == number)
        {
            cout << "Well guessed!";
            op = 1;
        }
    }
    return 0;
}