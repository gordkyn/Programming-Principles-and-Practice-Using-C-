#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter three arguments (two doubles and one operation): " << endl;
    double input1, input2;
    char operand;
    cin >> input1 >> operand >> input2;
    if (operand == '+')
    {
        cout << "The sum of " << input1 << " and " << input2 << " is " << input1 + input2;
    }
    else if (operand == '-')
    {
        cout << "The substraction of " << input1 << " and " << input2 << " is " << input1 - input2;
    }
    else if (operand == '*')
    {
        cout << "The multiplication of " << input1 << " and " << input2 << " is " << input1 * input2;
    }
    else if (operand == '/')
    {
        cout << "The division of " << input1 << " and " << input2 << " is " << input1 / input2;
    }
    else
        cout << "You have entered an invalid operator" << endl;

    return 0;
}
