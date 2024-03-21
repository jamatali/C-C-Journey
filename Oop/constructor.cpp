#include <iostream>
using namespace std;

class conClass{
public:
conClass(){
    cout << "Constructor" <<endl;
}
};

class conPara{
public:
string brand;
string model;
int year;
conPara(string x, string y, int z){
brand = x;
model = y;
year = z;
}
};
int main (){
conClass conObj;
conPara obj1("BMW", "Sozo33", 1990), obj2("Suzuki", "Loso44", 2002);

cout << obj1.brand << " " << obj1.model << " " << obj1.year <<endl;

cout << obj2.brand << " " << obj2.model << " " << obj2.year <<endl;

    return 0;
};

