#include <iostream>
#include <string>
using namespace std;

class Vehicle
{

public:
    string brand = "Honda";
    void honk()
    {
        cout << "ti tit ti ";
    }
};

class Vehicle_Registration
{

public:
    string rego_number;
    int price;

    Vehicle_Registration(string plate_number, int cost)
    {
        rego_number = plate_number,
        price = cost;
    }

    void show_rego_details()
    {
        cout << "Registration Number is" << rego_number << "and " << "Cost is " << price;
    }
};

class Car : public Vehicle, public Vehicle_Registration
{
public:
    Car(string plate_num, int price) : Vehicle_Registration(plate_num, price) {}
};

int main()
{

    Car mycar("1idx", 333);
    mycar.show_rego_details();

    return 0;
}