#include <iostream>
using namespace std;
int *multiply(int b)
{
    static int c[12];
    for (int i = 0; i < 12; i++)
    {
        c[i] = (i + 1) * b;
    }
    return c;
}

int main()
{
    int *p = NULL, num = 6;
    p = multiply(num);
    for (int i = 0; i < 12; i++)
    {
        cout << "*(p + " << i << ") : " << *(p + i) << endl;
    }
    return 0;
}