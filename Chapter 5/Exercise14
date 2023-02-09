#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// PROGRAM NAME: TRAINING
// PURPOSE: IMPROVE C++ SKILLS AND PROGRAMMING KNOWLEDGE
// WRITTEN BY MHS 09/02/2023
// VER 1.0

const vector<string> day1{"Monday", "monday", "Mon", "mon"};
const vector<string> day2{"Tuesday", "tuesday", "Tue", "tue"};
const vector<string> day3{"Wednesday", "wednesday", "Wed", "wed"};
const vector<string> day4{"Thursday", "thursday", "Thu", "thu"};
const vector<string> day5{"Friday", "friday", "Fri", "fri"};
const vector<string> day6{"Saturday", "saturday", "Sat", "sat"};
const vector<string> day7{"Sunday", "sunday", "Sun", "sun"};
vector<int> mon, tue, wed, thu, fri, sat, sun;
int rejectedValueCount = 0;

void error(string s) { throw runtime_error(s); }

void printVectorValuesAndSums(vector<int> values, string day)
{
    int sum = 0;
    cout << '\n';
    cout << day << "'s values: ";
    for (int i = 0; i < values.size(); i++)
    {
        cout << values[i] << " ";
        sum += values[i];
    }
    cout << "- Sum: " << sum;
}

void allocateValues(string day, int value)
{
    if (find(day1.begin(), day1.end(), day) != day1.end())
        mon.push_back(value);
    else if (find(day2.begin(), day2.end(), day) != day2.end())
        tue.push_back(value);
    else if (find(day3.begin(), day3.end(), day) != day3.end())
        wed.push_back(value);
    else if (find(day4.begin(), day4.end(), day) != day4.end())
        thu.push_back(value);
    else if (find(day5.begin(), day5.end(), day) != day5.end())
        fri.push_back(value);
    else if (find(day6.begin(), day6.end(), day) != day6.end())
        sat.push_back(value);
    else if (find(day7.begin(), day7.end(), day) != day7.end())
        sun.push_back(value);
    else
        rejectedValueCount++;
}

int main()
{
    string day;
    int num;
    cout << "Write days and their relevant numbers (type exit 0 to end writing): ";
    try
    {
        while (cin >> day >> num)
        {
            if (day == "exit")
                break;
            allocateValues(day, num);
        }
        printVectorValuesAndSums(mon, "Monday");
        printVectorValuesAndSums(tue, "Tuesday");
        printVectorValuesAndSums(wed, "Wednesday");
        printVectorValuesAndSums(thu, "Thursday");
        printVectorValuesAndSums(fri, "Friday");
        printVectorValuesAndSums(sat, "Saturday");
        printVectorValuesAndSums(sun, "Sunday");
        cout << "\nRejected value count: " << rejectedValueCount << endl;
    }
    catch (exception &e)
    {
        return 1;
    }
    catch (...)
    {
        return 2;
    }
    return 0;
}
