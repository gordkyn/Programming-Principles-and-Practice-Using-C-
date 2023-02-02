#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int findPrimeNumbers(int x, int y)
{
    vector<int> primeNumbers{2};
    for (int i = x; i <= y; i++)
    {
        int isPrimeNumber = 1;
        for (int j = 0; j < primeNumbers.size(); j++)
        {
            if (i % primeNumbers[j] == 0)
            {
                isPrimeNumber = 0;
                break;
            }
        }
        if (isPrimeNumber == 1)
        {
            primeNumbers.push_back(i);
        }
    }

    for (int i = 0; i < primeNumbers.size(); i++)
    {
        cout << "Prime number " << i + 1 << ": " << primeNumbers[i] << endl;
    }

    return 0;
}

int main()
{
    findPrimeNumbers(3, 100);
    return 0;
}
