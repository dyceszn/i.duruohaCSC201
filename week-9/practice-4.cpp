#include <iostream>
#include <string>
using namespace std;

class csc201
{
private:
    // access specifier
    char grade; // attribute grade
    int score;  // attribute score

public:
    // access specifier
    string name; // attribute name

    // Constructor
    csc201()
    {
        cout << "Student must pass CSC101\n";
        cout << "To pass the course the student must have a minimum score of 40\n";
    }

    // Setter for Score
    void setscore(int s)
    {
        score = s;
    }

    // Getter for Score
    int getscore()
    {
        return score;
    }

    // Setter for Grade
    void setgrade(char g)
    {
        grade = g;
    }

    // Getter for Grade
    char getgrade()
    {
        return grade;
    }
};

int main()
{
    csc201 student1;
    student1.setscore(20);
    student1.setgrade('F');
    student1.name = "Bello Moses Eromsele";
    cout << "Student1's Name = " << student1.name << ", grade = " << student1.getgrade() << ", and score = " << student1.getscore() << endl;
    return 0;
}