#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    struct
    {
        int myNum = 5;
        string myStr = "Hello Structures";

    } myStruct;

    cout << myStruct.myNum << endl;
    cout << myStruct.myStr;
    return 0;
}