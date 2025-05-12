#include <iostream>

using namespace std;

int x;
int y;
int total;

int addition(int x, int y);

int main()
{

    cout << "enter x " << "\n";
    cin >> x;
    cout << "enter y" << "\n";
    cin >> y;
    total = addition(x, y);
    cout << total;
    return 0;
}

int addition(int x, int y)
{

    return x + y;
}