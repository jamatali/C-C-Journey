#include <stdio.h>
#include <iostream>
using namespace std;

void myFunction (string x = "10") {
    cout << "This is My First C++ Function" << " " << x <<endl;
}
int main () {
    myFunction("20");
    return 0;
}