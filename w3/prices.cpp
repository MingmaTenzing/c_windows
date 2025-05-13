
#include <iostream>

using namespace std;

int main()
{
    double rice, water, soap, total;

    cout << "enter price of rice";
    cin >> rice;
    cout << "enter price of water";
    cin >> water;
    cout << "enter price of soap";
    cin >> soap;
    total = rice + water + soap;
    cout << total;
    return 0;
}