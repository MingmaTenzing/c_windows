#include <iostream>

using namespace std;

int main()
{

    string cars[3] = {"volvo", "bmw", "ford"};

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        cout << cars[i] << endl;
    }

    return 0;
}
