#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void findMode(vector<string> input)
{
    sort(input.begin(), input.end());
    int currentValueCount = 1;
    string currentValue = input[0];
    int maxValueCount = 0;
    string mode;

    for (int i = 0; i < input.size() - 1; i++)
    {
        if (input[i] == input[i + 1])
        {
            currentValueCount++;
            if (currentValueCount > maxValueCount)
            {
                maxValueCount = currentValueCount;
                mode = input[i];
            }
        }
        else
            currentValueCount = 1;
    }
    cout << "Mode of the current serie is " << mode << ", it is repeated " << maxValueCount << " times." << endl;
}

int main()
{
    vector<string> strings{"anakin", "skywalker", "luke", "bjarne", "stroustrup", "george", "michael", "darth", "vader", "tina","skywalker", "turner", "luke", "skywalker", "anakin", "vader", "skywalker","anakin"};
    findMode(strings);
    return 0;
}
