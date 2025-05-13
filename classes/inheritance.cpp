#include <iostream>

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

class Car : public Vehicle
{
public:
    string model = " Toyota";
};

int main()
{

    Car myCar;
    cout << myCar.brand << endl;
    cout << myCar.model << endl;
    myCar.honk();

    return 0;
}