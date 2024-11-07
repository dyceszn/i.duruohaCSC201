#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 2, 3};
    int largest = array[0];

    for (int i = 0; i < 3; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    cout << "The largest is " << largest << endl;
}