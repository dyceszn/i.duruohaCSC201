#include <iostream>
using namespace std;

class csc201
{ // the class
public:
    // access specifier
    int score;
    // attribute score
    string name;
    // attribute name
    char grade;
    // attribute grade

    // Declaration
    csc201()
    {
        // The constructor
        cout << "Student must pass CSC101\n";
        cout << "To pass the course the student must have a minimum score of 40\n";
    }
};

int main()
{
    csc201 student1;
    student1.score = 20;
    student1.grade = 'F';
    student1.name = "Bello Moses Eromsele";
    cout << "Student1's Name = " << student1.name << ", grade = " << student1.grade << ", and score = " << student1.score << endl;
    return 0;
}