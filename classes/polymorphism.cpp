#include <iostream>

using namespace std;

class Animal
{

public:
    void animalSound()
    {
        cout << "this is animal sound";
    };
};

class Pig : public Animal
{
public:
    int number;
    string name;

    void show_details()
    {
        cout << number << "and" << name;
    }
};

int main()
{

    Pig first;
    first.name = "mingma";
    first.number = 33;

    cout << first.name << first.number;

    first.animalSound();
    return 0;
}