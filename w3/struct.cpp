#include <iostream>

using namespace std;

struct
{
    string name;
    int age;
    double hourly_wage;
    double worked_hours;
} myemployee;

int main()
{

    myemployee.name = "Mingma";
    myemployee.age = 23;
    myemployee.hourly_wage = 31.3;
    myemployee.worked_hours = 32.5;

    cout << myemployee.name;
    cout << myemployee.age;
    cout << myemployee.worked_hours;

    return 0;
}
