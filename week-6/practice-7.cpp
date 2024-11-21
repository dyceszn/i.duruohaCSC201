#include <iostream>
using namespace std;
using C = char;
using NUMBERS = int;
using field = char[50];
int main()
{
    C x = 'a';
    NUMBERS y = 10;
    NUMBERS Z = 53;
    field characters = "Hello World";
    NUMBERS c = y + Z;
    cout << "NUMBERS c=y+z So c=" << c << endl;
    cout << "field characters = " << characters << endl;
    cout << "C x='a', so x=" << x << endl;
    return 0;
}