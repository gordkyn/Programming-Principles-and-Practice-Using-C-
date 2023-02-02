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

int nameIndexFinder(string name, vector<string> nameList)
{
    int result = 0;

    for (int i = 0; i < nameList.size(); i++)
    {
        if (name == nameList[i])
        {
            result = i;
            break;
        }
    }
    return result;
}

int main()
{
    string name;
    vector<string> names{"Anakin", "Obiwan", "Luke", "Yoda", "Windu"};
    vector<int> scores{10, 30, 53, 12, 21};
    cout << "Type the name to search" << endl;

    while (cin >> name)
    {
        if (!nameExists(name, names))
        {
            cout << "Name not found." << endl;
        }
        else if (nameExists(name, names))
        {
            int index = nameIndexFinder(name, names);
            cout << "This players score is " << scores[index] << endl;
        }
    }
    return 0;
}
