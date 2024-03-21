# include <iostream>
# include <stdio.h>

using namespace std;

class myClass {
    public:
        void myName(){
            cout << "Jamat Ali" << endl;
    };
};

class yourClass {
    public:
    void yourName(); //declaration
};

void yourClass::yourName(){ //definition outside class
    cout << "Nagan" <<endl;
};


int main () {
myClass myObj;
myObj.myName();

yourClass yourObj;
yourObj.yourName();
    return 0;
};