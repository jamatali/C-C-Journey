#include <iostream>
#include <stdio.h>
#include <string>

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
    cout << (x == 4) << endl;
    if (x > 4)
    {
        cout << "I am Done" << endl;
    }
    else
    {
        cout << "I am not done" << endl;
    }
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    else
    {
        cout << "x is not greater than y" << endl;
    }
    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    string result = (time < 18) ? "Good day." : "Good evening.";
    return 0;
}