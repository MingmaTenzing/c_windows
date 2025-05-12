#include <iostream>

using namespace std;

int x;
int y;
float average();

int main()
{
    int average_num;

    average_num = average();
    cout << average_num;
    return 0;
}

float average()
{
    int average;
    cout << "enter first number ";
    cin >> x;
    cout << "enter second number ";
    cin >> y;
    average = (x + y) / 2;
    return average;
}
