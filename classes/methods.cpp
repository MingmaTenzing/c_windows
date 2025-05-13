#include <iostream>
#include <string>
using namespace std;

class myClass
{

public:
    // int age;
    // string name;
    // string surname;
    // int phone;
    void showDetails();
    int speed(int maxSpeed);
};

int myClass::speed(int maxspeed)
{
    cout << "max speed is " << maxspeed << endl;
    return maxspeed;
}
void myClass::showDetails()
{
    cout << "hello world";
}

int main()
{

    myClass first;

    first.showDetails();
    first.speed(2000);

    return 0;
}