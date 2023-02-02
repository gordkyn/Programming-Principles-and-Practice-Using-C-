#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void findPrimes(int x)
{
    int upperLimit = INT32_MAX;
    vector<int> primeNumbers{2};

    for (int i = 3; i <= upperLimit, primeNumbers.size() < x; i++)
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
}

int main()
{
    cout << "How many primes do you want to find?" << endl;
    int input;
    cin >> input;
    findPrimes(input);
    return 0;
}
