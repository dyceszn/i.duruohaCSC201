#include <iostream>
using namespace std;

class csc201
{ // the class
public:
    // access specifier
    int score;
    // attribute score
    string name;
    // attribute grade
    char grade;
    // Inside class definition
public:
    void prerequisite()
    {
        cout << "Student must pass CSC101\n";
    }
    void verdict()
    {
        cout << "To pass the course the student must have a minimum score of 40\n";
    }
};

int main()
{
    csc201 student1;
    student1.score = 20;
    student1.grade = 'F';
    student1.name = "Bello Moses Eromsele";
    cout << "Student's Name = " << student1.name << ", grade = " << student1.grade << ", and score = " << student1.score << endl;
    student1.prerequisite();
    student1.verdict();
    return 0;
}