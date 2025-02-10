#include <iostream>
using namespace std;

// Base class
class course
{
public:
    string coursecode;
};

class csc201 : public course
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
    student1.coursecode = "CSC201";
    student1.name = "Bello Moses Eromsele";
    cout << "Student1's Name = " << student1.name << ", grade = " << student1.grade << ", and score = " << student1.score << endl;
    cout << "Student1 coursecode inherited from course " << student1.coursecode << endl;
    return 0;
}