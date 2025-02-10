#include <iostream>
using namespace std;

float num, ans, denom;

int main()
{
    cout << "Handling Exceptions" << endl;
    cout << "Enter Numerator" << endl;
    cin >> num;
    cout << "Enter Denominator" << endl;
    cin >> denom;
    ans = num / denom;
    cout << "Output: " << ans << endl;
    return 0;
}