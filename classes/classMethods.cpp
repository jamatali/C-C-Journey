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
    int parF(int loh);
};

int yourClass::parF(int loh){
    return loh;
};

void yourClass::yourName(){ //definition outside class
    cout << "Nagan" <<endl;
};


int main () {
myClass myObj;
myObj.myName();

yourClass yourObj;
yourObj.yourName();
yourClass parFObj;
int result = parFObj.parF(10);
cout << result;
    return 0;
};