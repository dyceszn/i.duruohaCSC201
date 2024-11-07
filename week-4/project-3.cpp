#include <iostream>
using namespace std;

int main()
{
    int max;
    int min;

    int array[] = {-23123, 432, 87694312, 0};
    min = array[0];
    max = array[0];

    for (int i = 0; i < 4; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        };
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "Max is " << max << endl;
    cout << "Min is " << min << endl;
}