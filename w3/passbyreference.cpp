#include <iostream>

using namespace std;

int &larger(int &x, int &y);

int &larger(int &x, int &y)
{

    if (x > y)
    {
        return x;
    }
    return y;
}
int main()
{

    int x, y, z;

    cout << "enter x" << endl;
    cin >> x;

    cout << "enter y" << endl;

    cin >> y;

    z = larger(x, y);
    cout << " the greator value is " << z;

    return 0;
}