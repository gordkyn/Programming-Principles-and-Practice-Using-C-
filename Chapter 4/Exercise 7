#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    cout << "Please enter three arguments seperated by space(two integers and one operation)." << endl;
    cout << "You may write integers as digits or text." << endl;
    string input1, input2;
    char operand;
    cin >> input1 >> operand >> input2;
    int firstValue, secondValue;

    try
    {
        firstValue = stoi(input1);
    }
    catch (exception e)
    {
    }
    try
    {
        secondValue = stoi(input2);
    }
    catch (exception e)
    {
    }

    if (input1 == "zero")
    {
        firstValue = 0;
    }
    else if (input1 == "one")
    {
        firstValue = 1;
    }
    else if (input1 == "two")
    {
        firstValue = 2;
    }
    else if (input1 == "three")
    {
        firstValue = 3;
    }
    else if (input1 == "four")
    {
        firstValue = 4;
    }
    else if (input1 == "five")
    {
        firstValue = 5;
    }
    else if (input1 == "six")
    {
        firstValue = 6;
    }
    else if (input1 == "seven")
    {
        firstValue = 7;
    }
    else if (input1 == "eight")
    {
        firstValue = 8;
    }
    else if (input1 == "nine")
    {
        firstValue = 9;
    }

    if (input2 == "zero")
    {
        secondValue = 0;
    }
    else if (input2 == "one")
    {
        secondValue = 1;
    }
    else if (input2 == "two")
    {
        secondValue = 2;
    }
    else if (input2 == "three")
    {
        secondValue = 3;
    }
    else if (input2 == "four")
    {
        secondValue = 4;
    }
    else if (input2 == "five")
    {
        secondValue = 5;
    }
    else if (input2 == "six")
    {
        secondValue = 6;
    }
    else if (input2 == "seven")
    {
        secondValue = 7;
    }
    else if (input2 == "eight")
    {
        secondValue = 8;
    }
    else if (input2 == "nine")
    {
        secondValue = 9;
    }

    if (operand == '+')
    {
        cout << "The sum of " << firstValue << " and " << secondValue << " is " << firstValue + secondValue;
    }
    else if (operand == '-')
    {
        cout << "The substraction of " << firstValue << " and " << secondValue << " is " << firstValue - secondValue;
    }
    else if (operand == '*')
    {
        cout << "The multiplication of " << firstValue << " and " << secondValue << " is " << firstValue * secondValue;
    }
    else if (operand == '/')
    {
        cout << "The division of " << firstValue << " and " << secondValue << " is " << firstValue / secondValue;
    }
    else
        cout << "You have entered an invalid operator" << endl;

    return 0;
}
