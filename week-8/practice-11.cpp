#include <iostream>
#include <string>
using namespace std;

struct student
{
    string matno;
    string name;
};

int main()
{
    student computer[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the Matriculation number of student " << i + 1 << " : ";
        cin >> computer[i].matno;
        cout << "Enter the name of student " << i + 1 << " : ";
        cin >> computer[i].name;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Matriculation number of student " << i + 1 << " : " << computer[i].matno << endl;
        cout << "Name of student " << i + 1 << " : " << computer[i].name << endl;
    }
    return 0;
}