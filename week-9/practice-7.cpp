#include <iostream>
using namespace std;

// Base class 1
class course
{
public:
    string coursecode;
};

// Base class 2
class sstf
{
public:
    string matno;
};

// Derived class
class csc201 : public course, public sstf
{
public:
    // access specifier
    char grade;  // attribute grade
    int score;   // attribute score
    string name; // attribute name
};

int main()
{
    csc201 student1;
    student1.score = 20;
    student1.grade = 'F';
    student1.matno = "SST/2021/77383883";
    student1.coursecode = "CSC201";
    student1.name = "Bello Moses Eromsele";

    cout << "Student's Name = " << student1.name << ", grade = " << student1.grade << ", and score = " << student1.score << endl;
    cout << "Student's coursecode inherited from course " << student1.coursecode << " Student's mat inherited from SST " << student1.matno << endl;

    return 0;
}