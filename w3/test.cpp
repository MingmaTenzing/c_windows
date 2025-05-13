#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Student class
class Student
{
private:
    string name;
    int id;
    float score;

public:
    Student(string n, int i, float s) : name(n), id(i), score(s) {}

    string getName() const
    {
        return name;
    }

    int getId() const
    {
        return id;
    }

    float getScore() const
    {
        return score;
    }

    void setScore(float s)
    {
        score = s;
    }
};

// Student information management system class
class StudentManager
{
private:
    vector<Student> students;

public:
    void addStudent(string name, int id, float score)
    {
        Student newStudent(name, id, score);
        students.push_back(newStudent);
    }

    void displayStudents() const
    {
        for (const Student &student : students)
        {
            cout << "Name：" << student.getName() << " Student ID：" << student.getId() << " Score：" << student.getScore() << endl;
        }
    }

    void searchById(int id) const
    {
        for (const Student &student : students)
        {
            if (student.getId() == id)
            {
                cout << "Name：" << student.getName() << " Student ID：" << student.getId() << " Score：" << student.getScore() << endl;
                return;
            }
        }
        cout << "Student number xx not found " << id << " not found" << endl;
    }

    void modifyScore(int id, float newScore)
    {
        for (Student &student : students)
        {
            if (student.getId() == id)
            {
                student.setScore(newScore);
                cout << "Modify the grades of students with student ID: " << id << " -> " << newScore << endl;
                return;
            }
        }
        cout << "Student number xx not found " << id << " not found" << endl;
    }

    void sortStudentsByScore()
    {
        sort(students.begin(), students.end(), [](const Student &s1, const Student &s2)
             {
                 return s1.getScore() > s2.getScore(); // Descending order of merit
             });
    }

    void calculateAverageScore() const
    {
        float totalScore = 0.0;
        for (const Student &student : students)
        {
            totalScore += student.getScore();
        }
        float averageScore = totalScore / students.size();
        cout << "Totals：" << totalScore << " Average score：" << averageScore << endl;

        for (const Student &student : students)
        {
            float difference = student.getScore() - averageScore;
            cout << "Name：" << student.getName() << " Gap between grades and grade point average：" << difference << endl;
        }
    }
};

int main()
{
    StudentManager manager;

    // Adding Student Information
    manager.addStudent("Tom", 1001, 80.5);
    manager.addStudent("Dick", 1002, 90.0);
    manager.addStudent("Harry", 1003, 75.2);

    // Student Information
    cout << "Student Information：" << endl;
    manager.displayStudents();

    // Enquiry on student number 1002
    cout << "Enquiry on student number 1002：" << endl;
    manager.searchById(1002);

    // Modify student information
    manager.modifyScore(1003, 78.9);
    cout << "Modified student information：" << endl;
    manager.displayStudents();

    // Student information sorted by grades
    cout << "Student information in descending order of performance：" << endl;
    manager.sortStudentsByScore();
    manager.displayStudents();

    // Statistical information on students
    cout << "Statistical information on students：" << endl;
    manager.calculateAverageScore();

    return 0;
}