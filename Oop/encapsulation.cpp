# include <iostream>
using namespace std;

class Employee {

    private:

    int salary;

    public:

    void setSalary (int s) {
        salary = s;
    }

    int getSalary () {

        return salary;
    }


};

int main () {

Employee salaryObj;

salaryObj.setSalary(500000);

int salary = salaryObj.getSalary();

cout << salary << endl;


return 0;
};