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

void error(string s) { throw runtime_error(s); }

int main()
{
    cout << "Please enter the number of values you want to sum: ";
    try
    {
        int sumValueCount;
        cin >> sumValueCount;
        if (sumValueCount < 1)
            error("Amount of values to sum cannot be zero or negative.");
        cout << "Please enter some doubles (press | to stop): ";
        vector<double> inputNumbers;
        double input;
        int sum = 0;

        while (cin >> input)
        {
            inputNumbers.push_back(input);
        }

        if (sumValueCount > inputNumbers.size())
            error("There are not enough values to sum in vector.");

        for (int i = 0; i < sumValueCount; i++)
        {
            sum += inputNumbers[i];
        }
        cout << "Sum of values is: " << sum << endl;
        vector<double> differences;

        for (int i = 0; i < inputNumbers.size(); i++)
        {
            if (i != sumValueCount - 1)
                differences.push_back(inputNumbers[i] - inputNumbers[i + 1]);
        }

        for (int i = 0; i < differences.size(); i++)
        {
            if (i != differences.size())
                cout << "Difference between " << i << ". and " << i + 1 << ". value is " << differences[i] << endl;
        }
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
