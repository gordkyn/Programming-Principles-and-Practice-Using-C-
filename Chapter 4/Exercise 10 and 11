#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    // 0 = rock, 1 = paper, 2 = scissors
    cout << "Please make your move(0 = rock, 1 = paper, 2 = scissors)" << endl;
    int playerMove, randomInt;
    cin >> playerMove;
    cout << "Enter a random integer" << endl;
    cin >> randomInt;
    int compMove = randomInt % 3;
    switch (compMove)
    {
    case 0:
        if (playerMove == 0)
            cout << "Computer did rock and you did rock. Draw!" << endl;
        if (playerMove == 1)
            cout << "Computer did rock and you did paper. You won!" << endl;
        if (playerMove == 2)
            cout << "Computer did rock and you did scissors. You lost!" << endl;
        break;
    case 1:
        if (playerMove == 0)
            cout << "Computer did paper and you did rock. You lost!" << endl;
        if (playerMove == 1)
            cout << "Computer did paper and you did paper. Draw!" << endl;
        if (playerMove == 2)
            cout << "Computer did paper and you did scissors. You won!" << endl;
        break;
    case 2:
        if (playerMove == 0)
            cout << "Computer did scissors and you did rock. You won!" << endl;
        if (playerMove == 1)
            cout << "Computer did scissors and you did paper. You lost!" << endl;
        if (playerMove == 2)
            cout << "Computer did scissors and you did scissors. Draw!" << endl;
        break;
    default:
        cout << "You entered an invalid move" << endl;
        break;
    }
    return 0;
}
