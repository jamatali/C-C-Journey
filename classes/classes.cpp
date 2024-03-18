#include <iostream>
#include <stdio.h>

using namespace std;

class myClass{ // the class
public:         // Access Specifier
int myNum;      // Atrribute
string myStr;   //Attribute
};

int main(){

myClass myObj; // create an object of my class

//Access attributes and set values

myObj.myNum = 10;
int x = myObj.myNum;
myObj.myStr = "Firs OOP Step";

cout << "Int Attibute: " << myObj.myNum << endl;
cout << "Str Attibute: " << myObj.myStr << endl;
cout << "Int Attibute: " << x << endl;


    return 0;
};