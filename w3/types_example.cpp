#include <iostream>

using namespace std;

int items = 50;

double cost_per_item = 9.9;

double total_cost = items * cost_per_item;

char currency = '$';

int main()
{
    cout << "Number of items: " << items << "\n";
    cout << "Cost per item " << cost_per_item << "\n";
    cout << "total cost " << currency << total_cost << "\n";

    return 0;
}