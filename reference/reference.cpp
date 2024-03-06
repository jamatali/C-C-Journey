#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    cout << &food; //This will Give memory address of a variable
    return 0;
}
