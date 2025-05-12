#include <iostream>

using namespace std;

int getScore();
char findGrade(int score);
void printResult(int score, char grade);

int score;
char grade;

int main()
{
    score = getScore();
    grade = findGrade(score);
    printResult(score, grade);

    return 0;
}

int getScore()
{
    cout << "Enter your score";

    cin >> score;
    while (score > 0 && score <= 100)
    {

        return score;
    }
    cout << "the score your provided is invalid";
}

char findGrade(int score)
{

    if (score >= 85)
    {
        return 'A';
    }
    if (score >= 75 && score <= 84)
    {
        return 'B';
    }
    if (score >= 65 && score < 75)
    {
        return 'C';
    }
    if (score >= 50 && score < 65)
    {
        return 'D';
    }
    if (score < 50)
    {
        return 'F';
    }
}

void printResult(int score, char grade)
{
    cout << "Your score is " << score << "\n";
    cout << "Your Grade is " << grade << "\n";
}