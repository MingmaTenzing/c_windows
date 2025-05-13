
#include <iostream>

using namespace std;

int main()
{

    const double max_working_hour = 40;
    const double hourly_wage = 32.5;
    const double overtime_rate = 1.5;
    double overtime_hours;
    double worked_hour;

    double total_wage;

    cout << "enter the hours worked in a week";

    cin >> worked_hour;
    if (worked_hour > max_working_hour)
    {

        overtime_hours = worked_hour - max_working_hour;
        total_wage = (worked_hour * hourly_wage) + ((hourly_wage * overtime_rate) * overtime_hours);
    }
    total_wage = worked_hour * hourly_wage;

    cout << total_wage;
    return 0;
}