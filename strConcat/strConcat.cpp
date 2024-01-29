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
    return 0;
}