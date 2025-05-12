#include <iostream>

using namespace std;

void greatest();

int main()
{

    greatest();
    return 0;
}

void greatest()
{

    int number1, number2;
    cout << "enter first number";
    cin >> number1;
    cout << "enter second number";
    cin >> number2;

    if (number1 == number2)
    {
        cout << "the numbers are equal";
    }
    if (number1 > number2)
    {
        cout << number1 << "is the greater one";
    }
    if (number2 > number1)
    {
        cout << number2 << "is the greater one";
    }
}