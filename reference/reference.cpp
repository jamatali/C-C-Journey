#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;
    string* ptr = &food;

    cout << food << "\n";
    cout << meal << "\n";
    cout << food << endl; //This will print the value of food which is Pizza
    cout << &food << endl; //This will Give memory address of a variable
    cout << ptr << endl; //This will print the memory address as pointer



    return 0;
}
