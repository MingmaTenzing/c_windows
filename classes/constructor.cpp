#include <iostream>

using namespace std;

class Car
{
public:
    string brand;
    string model;
    int year;

    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()

{

    Car firstCar("Toyota", "aurion", 2007);
    cout << firstCar.brand;
    return 0;
}