#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// PROGRAM NAME: TRAINING
// PURPOSE: IMPROVE C++ SKILLS AND PROGRAMMING KNOWLEDGE
// WRITTEN BY MHS 09/02/2023
// VER 1.0

// INPUTS SHOULD BE INTEGERS

void error(string s) { throw runtime_error(s); }

void compareNumbers(vector<int> input, vector<int> numberToGuess)
{
    if (input.size() != numberToGuess.size())
        error("Numbers can't be compared due to size difference!");

    int bull = 0, cow = 0;
    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < numberToGuess.size(); j++)
        {
            if (input[i] == numberToGuess[j] && i == j)
                ++bull;
            if (input[i] == numberToGuess[j] && i != j)
                ++cow;
        }
    }
    cout << bull << " bull(s) and " << cow << " cow(s)" << endl;
}

vector<int> breakDownInteger(int input)
{
    if (input > 9999)
        error("Input integer has more than 4 digits.");
    if (input < 1000)
        error("Input integer has less than 4 digits or not an integer.");

    vector<int> inputToVector;
    int numberLeft = input;
    int digit1 = numberLeft / 1000;
    numberLeft -= digit1 * 1000;
    int digit2 = numberLeft / 100;
    numberLeft -= digit2 * 100;
    int digit3 = numberLeft / 10;
    numberLeft -= digit3 * 10;
    int digit4 = numberLeft;

    inputToVector.push_back(digit1);
    inputToVector.push_back(digit2);
    inputToVector.push_back(digit3);
    inputToVector.push_back(digit4);
    return inputToVector;
}

int main()
{
    cout << "This game is called bulls and cows. ";
    cout << "The computer guessed a number with 4 digits. You need to guess this number. ";
    cout << "Bull means you guessed a digit correct, cow means you guessed a number correct but it's digit wrong.\n";
    cout << "Guess a number: ";
    int numberToGuess = 1357, input;
    vector<int> numToGuessDigits = breakDownInteger(numberToGuess);
    try
    {
        while (true)
        {
            cin >> input;
            if (input == numberToGuess)
                break;
            else
            {
                vector<int> inputDigits = breakDownInteger(input);
                compareNumbers(inputDigits, numToGuessDigits);
                inputDigits.clear();
            }
            cout << "Enter a new number: ";
        }
        cout << "You guessed correct!" << endl;
    }
    catch (exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }
    catch (...)
    {
        cerr << "Unknown error occurred." << endl;
    }
    return 0;
}
