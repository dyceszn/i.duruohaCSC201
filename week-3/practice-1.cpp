#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    int n;
    cout << "Enter value for n" << endl;
    cin >> n;
    for (i = 1; i < n + 1; i++)
    {
        for (j = 1; j < 13; j++)
        {
            cout << i << "x" << j << "=" << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}