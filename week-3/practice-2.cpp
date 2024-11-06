#include <iostream>
using namespace std;

int main()
{
    int i;
    int a;
    int b;
    int sum;
    cout << "Input lower limit:";
    cin >> a;
    cout << "Input upper limit:";
    cin >> b;

    // when a is less than b

    if (a < b)
    {
        for (i = a; i < b + 1; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << "\t";
                sum += i;
            }
        }
    }

    // when b is less than a

    else if (a > b)
    {
        for (i = b; i < a + 1; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << "\t";
                sum += i;
            }
        }
    }

    // when a is equal to b

    else if (a == b and a % 2 != 0)
    {
        cout << a << "\t";
        sum = a;
    }
    else
    {
        cout << "invalid input";
        sum = 0;
    }

    cout << endl
         << "The sum of all numbers between " << a << "and " << b << " is " << sum << endl;
}