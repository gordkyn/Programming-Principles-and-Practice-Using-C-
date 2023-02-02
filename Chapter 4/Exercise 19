#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int nameExists(string name, vector<string> nameList)
{
    int result = 0;

    for (int i = 0; i < nameList.size(); i++)
    {
        if (name == nameList[i])
        {
            result = 1;
            break;
        }
    }

    return result;
}

void printNames(vector<string> nameList, vector<int> scoreList)
{
    for (int i = 0; i < nameList.size(); i++)
    {
        cout << nameList[i] << " " << scoreList[i] << endl;
    }
}

int main()
{
    string name;
    int score;
    vector<string> names;
    vector<int> scores;

    cout << "Write the scores of each person" << endl;
    while (cin >> name >> score)
    {
        if (name == "NoName" && score == 0)
            break;

        if (!nameExists(name, names))
        {
            names.push_back(name);
            scores.push_back(score);
        }
        else
        {
            cout << "Error! Name already has entry." << endl;
            break;
        }
    }

    printNames(names, scores);
    return 0;
}
