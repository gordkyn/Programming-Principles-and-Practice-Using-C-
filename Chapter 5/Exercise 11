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

// INPUTS ARE ASSUMED TO BE INTEGERS

void error(string s) { throw runtime_error(s); }

int main()
{
    cout << "How many fibonacci numbers should be written?: ";
    int input;
    cin >> input;
    vector<int> fibNumbers{1, 1};

    try
    {
        if (input < 1)
            error("You should request at least 1 number.");

        for (int i = 2; i < input; i++)
        {
            float test = fibNumbers[i - 1] + fibNumbers[i - 2];
            if (test < fibNumbers[i])
            {
                cout << fibNumbers[i - 1] << " is the biggest number that fits in an int." << endl;
                break;
            }
            fibNumbers.push_back(fibNumbers[i - 1] + fibNumbers[i - 2]);
        }

        for (int i = 0; i < fibNumbers.size(); i++)
        {
            cout << i + 1 << ". value = " << fibNumbers[i] << endl;
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
