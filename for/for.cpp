#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << "\n";
    // }
    // for (int i = 0; i <= 10; i = i + 2)
    // {
    //     cout << i << "\n";
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 4)
    //     {
    //         break;
    //     }
    //     cout << i << "\n";
    // }
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        else if (i == 6)
        {
            continue;
            ;
        }
        else if (i == 9)
        {
            break;
        }

        cout << i << "\n";
    }
    return 0;
}
