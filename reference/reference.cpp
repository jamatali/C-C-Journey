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
    //Reference:  Output the memory address of the food with the pointer
    cout << ptr << endl; //This will print the memory address as pointer
    //Dereferenace: Output the value of the food with the pinter
    cout << *ptr << endl;



    return 0;
}
