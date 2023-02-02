#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void findSolutions(double a, double b, double c)
{
    double delta = b * b - 4 * a * c;
    double firstSolution = (-b + sqrt(delta)) / (2 * a);
    double secondSolution = (-b - sqrt(delta)) / (2 * a);
    cout << "First solution is " << firstSolution << endl;
    cout << "Second solution is " << secondSolution << endl;
}

int main()
{
    cout << "This program is a quadratic equation (ax^2 + bx + c = 0) solver." << endl;
    cout << "Please enter the coefficients of the equation with spaces in the middle (a b c)" << endl;
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    findSolutions(a, b, c);
    return 0;
}
