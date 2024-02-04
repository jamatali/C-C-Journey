#include <iostream>
#include <string>

using namespace std;

int main()
{

    string cars[3] = {"BMW", "Maruti", "suzuki"};
    cout << cars[0] << endl;

    cars[0] = "hundai";
    cars[2] = "jkob";

    cout << cars[0] << endl;

    int length = sizeof(cars);
    cout << "Array Length is: " << (length / 32) << endl;

    // Loop in Array:

    string car[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << car[i] << "\n";
    }
    // forEach Loop

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    // declariotn only with

    string cars1[5];
    cars1[0] = "Volvo";
    cars1[1] = "BMW";
    cars1[2] = "Ford";
    cars1[3] = "Mazda";
    cars1[4] = "Tesla";
    for (int i = 0; i < 5; i++)
    {
        cout << cars1[i] << "\n";
    }
    return 0;
}