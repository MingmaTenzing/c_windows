#include <iostream>

using namespace std;

class Employee
{

private:
    int salary;

public:
    string name;
    int phone;
    string location;
    Employee(string employee_name,
             int phone_number,
             string address)
    {

        name = employee_name;
        phone = phone_number;
        location = address;
    }

    void setSalary(int s)

    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
}