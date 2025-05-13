#include <iostream>

using namespace std;

int main()
{

    string name = "Mingma";
    string checkname = "Mingma Tenzing Sherpa, migmatenzing689@gmail.com. is a student in perth studying Bachelors of Information Technology";
    int number = 10;
    string &address = name;

    string *ptr = &address;

    cout << name << endl;
    cout << &address << endl;
    cout << *ptr << endl;

    cout << sizeof(checkname) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(number) << endl;

    cout << "now changing the value of pointer" << endl;

    *ptr = "Tenzing";
    cout << *ptr << endl;

    cout << name << endl;

    return 0;
}