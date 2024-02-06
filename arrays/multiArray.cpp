#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    bool guess[4][4] = {
        {0, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {1, 1, 1, 1}};

    int shot = 0;
    int shotCount = 0;

    while (shot < 4)
    {
        int r, c;
        cout << "Enter Row Number: " << endl;
        cin >> r;
        cout << "Enter Column Number: " << endl;
        cin >> c;
        if (guess[r][c])
        {
            guess[r][c] = 0;
            shot++;
            cout << "Shot Successfully" << (4 - shot) << "left!" << endl;
        }
        else
        {
            cout << "You Missed" << endl;
        }
        shotCount++;
    }
    cout << "Victory!" << endl;
    cout << "You Won In" << shotCount;

    return 0;
}