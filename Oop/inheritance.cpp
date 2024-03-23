# include <iostream>

using namespace std;

class vehicle {

    public:

    string brand = "Ford";

    void honk () {
        cout << "Toot  Tut" << endl;
    }


};

class car: public vehicle{

    public:

    string model = "Mustung";

};

int main () {

    car carObj;

    carObj.honk();

    cout << carObj.brand + "  " + carObj.model << endl;

    return 0;
};