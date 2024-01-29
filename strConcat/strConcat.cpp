#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fName = "Jamat ";
    string lName = "Ali";
    // cout << fName + " " + lName;

    string fullName = fName.append(lName);
    cout << fullName;
    return 0;
}