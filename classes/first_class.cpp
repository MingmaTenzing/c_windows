#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class MyClass
{
public:
    int myNum;
    string myString;
};

int main()
{
    MyClass firstobj;

    firstobj.myNum = 17;
    firstobj.myString = "Mingma";

    MyClass second_obj;

    second_obj.myNum = 12;
    second_obj.myString = "Peace Lover";

    cout << second_obj.myNum << endl;
    cout << second_obj.myString << endl;

    cout
        << firstobj.myNum << endl;

    cout << firstobj.myString << endl;

    return 0;
}