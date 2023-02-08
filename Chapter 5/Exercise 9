#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// PROGRAM NAME: TRAINING
// PURPOSE: IMPROVE C++ SKILLS AND PROGRAMMING KNOWLEDGE
// WRITTEN BY MHS 07/02/2023
// VER 1.0

// INPUTS ARE EXPECTED TO BE INTEGERS
// DOUBLE INPUTS WILL CREATE NARROWING ERRORS

void error(string s) { throw runtime_error(s); }

int celsiusToFahrenheit(double c)
{
    if (c < -273.15)
        error("Celsius cannot be lower than -273.15.\n");
    double f = 9.0 / 5 * c + 32;
    int fInt = f;
    if (f != fInt)
        error("Result cannot be represented as an integer.\n");
    return f;
}

int fahrenheitToCelsius(double f)
{
    if (f < -459.67)
        error("Fahrenheit cannot be lower than -459.67.\n");
    double c = (f - 32) * 5.0 / 9;
    int cInt = c;
    if (c != cInt)
        error("Result cannot be represented as an integer.\n");
    return c;
}

int main()
{
    cout << "Please write an integer temperature: ";
    try
    {
        int input;
        cin >> input;
        int result = celsiusToFahrenheit(input);
        result = celsiusToFahrenheit(input);
        cout << "Celsius to Fahrenheit= " << result << endl;
        result = fahrenheitToCelsius(input);
        cout << "Fahrenheit to Celsius= " << result << endl;
    }
    catch (exception &e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...)
    {
        cerr << "Unknown error occurred." << endl;
        return 1;
    }
    return 0;
}
