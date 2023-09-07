#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void sieveOfEratosthenes(int x)
{
    // first populate a vector
    vector<int> numbers;

    for (int i = 2; i <= x; i++)
    {
        numbers.push_back(i);
    }

    // then remove non prime numbers
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != 0)
        {
            for (int j = i + numbers[i]; j < numbers.size(); j += numbers[i])
            {
                numbers[j] = 0;
            }
        }
    }
    int counter = 1;
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] != 0)
        {
            cout << "Prime number " << counter << ": " << numbers[i] << endl;
            ++counter;
        }
    }
}

int main()
{
    cout << "Until which value you want to find prime numbers?" << endl;
    int input;
    cin >> input;
    sieveOfEratosthenes(input);
    return 0;
}
