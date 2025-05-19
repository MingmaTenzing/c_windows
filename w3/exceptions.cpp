#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "enter your age : ";
    cin >> age;
    if (!age)
    {
        cout << "enter the age first please" << endl;
        return 0;
    }
    try
    {
        if (age >= 18)
        {
            cout << "Access granted";
        }
        else
        {
            throw 505;
        }
    }
    catch (int errorCode)
    {
        cout << "Access Denied the status code is : " << errorCode;
    }

    return 0;
}