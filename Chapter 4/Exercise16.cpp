#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void findMode(vector<int> inputVector)
{
    sort(inputVector.begin(), inputVector.end());
    int currentValueCount = 1;
    int currentValue = inputVector[0];
    int maxValueCount = 0;
    int mode;

    for (int i = 0; i < inputVector.size() - 1; i++)
    {
        if (inputVector[i] == inputVector[i + 1])
        {
            currentValueCount++;
            if (currentValueCount > maxValueCount)
            {
                maxValueCount = currentValueCount;
                mode = inputVector[i];
            }
        }
        else
            currentValueCount = 1;
    }
    cout << "Mode of the current serie is " << mode << ", it is repeated " << maxValueCount << " times." << endl;
}

int main()
{
    vector<int> randomIntegers{17, 4, 7, 9, 17, 4, 2, 5, 6, 8, 0, 17, 5, 6, 7, 8, 0, 2, 5, 17, 8, 9, 8, 0, 17, 6, 5, 4, 3, 6, 17, 8, 9};
    findMode(randomIntegers);
    return 0;
}
