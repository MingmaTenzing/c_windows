#include <iostream>

using namespace std;

string name;
int age;
string phone;

int main()
{
    cout << "enter your name";
    cin >> name;
    cout << "enter your age";
    cin >> age;
    cout << "enter your phone number";
    cin >> phone;

    cout << "thanks for entering your details" << "\n";
    cout << "Your name is " << name << "," << "age is" << age << +"your phone is " << phone;

    return 0;
}