#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fName = "Jamat ";
    string lName = "Ali";
    // cout << fName + " " + lName;

    string fullName = fName.append(lName);
    cout << fullName << endl;
    cout << "The String Length of fName is: " << fName.length() << endl;
    cout << "The Length of fullName is: " << fullName.size() << endl;
    // String Char Accessing:

    // cout << fName[0] << endl;
    // cout << fName[1] << endl;
    // cout << fName[2] << endl;
    // cout << fName[3] << endl;
    // cout << fName[4] << endl;

    fullName[0] = 't';
    cout << fullName;

    return 0;
}