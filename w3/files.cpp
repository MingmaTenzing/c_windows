#include <iostream>

#include <fstream>

using namespace std;

int main()
{

    string myText;

    ofstream myfirstFile("myfirst.txt");

    myfirstFile << " Files can be trciky, but it is fun enough";

    for (int i = 0; i < 10; i++)
    {
        myfirstFile << "This is the line " << i << endl;
    }

    myfirstFile.close();

    ifstream myfirstRead("myfirst.txt");
    while (getline(myfirstRead, myText))

    {
        cout << myText << endl;
        }

    return 0;
}