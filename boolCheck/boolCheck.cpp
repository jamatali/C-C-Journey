#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x = 4;
    int y = 6;
    cout << (x > y ? x : y) << endl;

    bool isOk = true;
    bool isDone = false;
    cout << isOk << endl;
    cout << isDone << endl;
    cout << (x > y) << endl;
    return 0;
}