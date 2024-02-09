#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World" << endl; // Just Printing
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << ": Hello Evenly" << endl;
        }
        else
        {
            cout << "Hello Odd" << endl;
        }
    }
    return 0;
}