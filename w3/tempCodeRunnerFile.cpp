#include <iostream>

using namespace std;

int main()
{

    int score = 92;
    int &rScore = score;
    cout << "score" << score << endl;

    cout << "reference value" << endl;
    cout << "rScore" << rScore;

    return 0;
}
