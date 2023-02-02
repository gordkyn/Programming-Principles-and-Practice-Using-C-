#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int scoreExists(int score, vector<int> scoreList)
{
    int result = 0;

    for (int i = 0; i < scoreList.size(); i++)
    {
        if (score == scoreList[i])
        {
            result = 1;
            break;
        }
    }
    return result;
}

vector<int> scoreIndexFinder(int score, vector<int> scoreList)
{
    vector<int> results;

    for (int i = 0; i < scoreList.size(); i++)
    {
        if (score == scoreList[i])
        {
            results.push_back(i);
        }
    }
    return results;
}

void printNames(vector<int> indexes, vector<string> names)
{
    for (int i = 0; i < indexes.size(); i++)
    {
        cout << names[i] << endl;
    }
}

int main()
{
    int score;
    vector<string> names{"Anakin", "Obiwan", "Luke", "Yoda", "Windu"};
    vector<int> scores{10, 30, 53, 12, 30};
    cout << "Type the score to search" << endl;

    while (cin >> score)
    {
        if (!scoreExists(score, scores))
        {
            cout << "Score not found." << endl;
        }
        else
        {
            vector<int> indexes = scoreIndexFinder(score, scores);
            printNames(indexes, names);
        }
    }
    return 0;
}
