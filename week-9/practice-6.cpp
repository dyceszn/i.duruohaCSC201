#include <iostream>
using namespace std;

// Base class
class PanAtlantic
{
public:
    void matno()
    {
        cout << "Student Mat:No depends on the School\n";
    }
};

// Derived class
class SST : public PanAtlantic
{
public:
    void matno()
    {
        cout << "It begins with SST\n";
    }
};

// Derived class
class ISMS : public PanAtlantic
{
public:
    void matno()
    {
        cout << "It begins with ISMS\n";
    }
};

int main()
{
    PanAtlantic student;
    SST student1;
    ISMS student2;
    student.matno();
    student1.matno();
    student2.matno();
    return 0;
}