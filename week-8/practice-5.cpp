#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Size: " << g1.size();
    cout << "\nCapacity: " << g1.capacity();
    cout << "\nMax_Size: " << g1.max_size();

    // resizes the vector size to 4
    g1.resize(4);

    // prints the vector size after resize
    cout << "\nSize after resize: " << g1.size();

    // checks if the vector is empty or not
    if (!g1.empty())
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    cout << "\nBefore Shrink to fit function Vector elements are: ";
    for (int i = 0; i < g1.size(); i++)
        cout << g1[i] << " ";

    // Shrinks the vector
    g1.shrink_to_fit();
    cout << "\nAfter Shrink to fit function Vector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";

    return 0;
}