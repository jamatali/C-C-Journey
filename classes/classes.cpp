#include <iostream>
#include <stdio.h>

using namespace std;

class myClass{ // the class
public:         // Access Specifier
int myNum;      // Atrribute
string myStr;   //Attribute
};

class Car {
    public:
    string brand;
    string model;
    int year;
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

Car carObj1, carObj2;

carObj1.brand = "Suzuki";
carObj1.model = "Mehran-420";
carObj1.year = 2020;

carObj2.brand = "Atlas";
carObj2.model = "CD-70-Delux";
carObj2.year = 2015;

cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year <<endl;
cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year <<endl;

    return 0;
};