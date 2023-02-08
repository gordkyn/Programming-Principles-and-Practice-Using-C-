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

// INPUTS ARE EXPECTED TO BE INT, FLOAT OR DOUBLE

void error(string s) { throw runtime_error(s); }

double findDelta(double a, double b, double c)
{
    if (a == 0)
        error("This equation is not quadratic.");
    double delta = b * b - 4 * a * c;
    if (delta < 0)
        error("The quadratic equation has no real solutions.");
    return delta;
}

double firstRoot(double a, double b, double delta)
{
    if (a == 0)
        error("This equation is not quadratic.");
    if (delta < 0)
        error("The quadratic equation has no real solutions.");
    return (-b + sqrt(delta)) / (2.0 * a);
}

double secondRoot(double a, double b, double delta)
{
    if (a == 0)
        error("This equation is not quadratic.");
    if (delta < 0)
        error("The quadratic equation has no real solutions.");
    return (-b - sqrt(delta)) / (2.0 * a);
}

int main()
{
    double a, b, c;
    cout << "This program solves quadratic equations." << endl;
    cout << "Write coefficients with spaces in the middle of each: ";
    cin >> a >> b >> c;
    try
    {
        double delta = findDelta(a, b, c);
        double root1 = firstRoot(a, b, delta);
        double root2 = secondRoot(a, b, delta);
        cout << "First root is " << root1 << ", second root is " << root2 << endl;
    }
    catch (exception &e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }
    catch (...)
    {
        cerr << "Unknown exception occurred." << endl;
        return 1;
    }

    return 0;
}
