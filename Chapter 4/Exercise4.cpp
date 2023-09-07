#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int bottom = 0, top = 100, mean = (bottom + top) / 2;
    int input;
    cout << "Pick a number between 1 and 100.." << endl;
    cout << "Please answer questions with 1,2 or 3.." << endl;
    cout << "1 = less than computers guess, 2 = equal to computers guess, 3 = more than computers guess.." << endl;
    cout << "Is it " << mean << "?" << endl;
    while (cin >> input)
    {
        if (input == 1)
        {
            top = mean;
        }
        if (input == 2)
        {
            cout << "Computer guessed your number!" << endl;
            terminate();
        }
        if (input == 3)
        {
            bottom = mean;
        }
        mean = (bottom + top) / 2;
        cout << "Is it " << mean << "?" << endl;
    }
    return 0;
}
