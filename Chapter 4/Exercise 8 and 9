#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int firstTarget = 1000;
    int secondTarget = 1000000;
    int thirdTarget = 1000000000;
    unsigned long long int sum = 0;
    int firstTargetReached = 0, secondTargetReached = 0, thirdTargetReached = 0;

    for (int i = 0; i < 64; i++)
    {
        cout << "Square number " << i + 1 << " and current total is " << sum << endl;
        sum += pow(2, i);
        if (sum >= firstTarget && !firstTargetReached)
        {
            cout << "*** 1.000 grains! ***" << endl;
            firstTargetReached = 1;
        }
        if (sum >= secondTarget && !secondTargetReached)
        {
            cout << "*** 1.000.000 grains! ***" << endl;
            secondTargetReached = 1;
        }
        if (sum >= thirdTarget && !thirdTargetReached)
        {
            cout << "*** 1.000.000.000 grains! ***" << endl;
            thirdTargetReached = 1;
        }
    }
    return 0;
}
