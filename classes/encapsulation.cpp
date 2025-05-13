#include <iostream>

using namespace std;

class Employee
{

private:
    int salary;

public:
    string name;
    long long int phone;
    string location;

    Employee(string employee_name,
             int phone_number,
             string address, int earning)
    {

        name = employee_name;
        phone = phone_number;
        location = address;
        salary = earning;
    }

    void setSalary(int s)

    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }

    void show_user_details()
    {
        cout << name << endl;
        cout << phone << endl;
        cout << location << endl;
        cout << salary << endl;
    }
};

int main()
{
    int employee_salary;
    Employee first_employee("Mingma", 420639689, "Morely", 220);
    Employee second_employee("Tenzing", 8893, "como", 10);

    first_employee.show_user_details();
    second_employee.show_user_details();

    first_employee.setSalary(750);

    employee_salary = first_employee.getSalary();
    cout << employee_salary << endl;

    first_employee.show_user_details();

    return 0;
}