#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// PROGRAM NAME: TRAINING
// PURPOSE: IMPROVE C++ SKILLS AND PROGRAMMING KNOWLEDGE
// WRITTEN BY MHS 08/02/2023
// VER 1.0

//INPUTS ARE NOT CHECKED THOROUGHLY (CAN ENTER CHARS OR STRINGS)


void error(string s) { throw runtime_error(s); }

double ctok(double c)
{
    if (c < -273.15)
        error("Celsius cannot be lower than -273.15.\n");
    double k = c + 273.15;
    return k;
}

double kelvinToCelsius(double k)
{
    if (k < 0)
        error("Kelvin cannot be lower than 0K.\n");
    double c = k - 273.15;
    return c;
}

double celsiusToFahrenheit(double c)
{
    if (c < -273.15)
        error("Celsius cannot be lower than -273.15.\n");
    double f = 9.0 / 5 * c + 32;
    return f;
}

double fahrenheitToCelsius(double f)
{
    double c = (f - 32) * 5.0 / 9;
    if (c < -273.15)
        error("Celsius cannot be lower than -273.15.\n");
    return c;
}

int main()
{
    try
    {
        double input;
        cin >> input;
        double result = ctok(input);
        // if (k < 0)
        // error("Kelvin cannot be lower than 0K.\n");
        cout << "Celsius to Kelvin= " << result << endl;
        result = celsiusToFahrenheit(input);
        cout << "Celsius to Fahrenheit= " << result << endl;
        result = kelvinToCelsius(input);
        cout << "Kelvin to Celsius= " << result << endl;
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
