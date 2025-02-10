#include <iostream>
#include <list>
#include <iterator>

using namespace std;

// function for printing the elements in a List
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
    list<int> galist1, galist2;
    for (int i = 0; i < 10; ++i)
    {
        galist1.push_back(i * 2);
        galist2.push_front(i * 3);
    }

    cout << "\nList 1 (galist1) is : ";
    showlist(galist1);

    cout << "\nList 2 (galist2) is : ";
    showlist(galist2);

    cout << "\ngalist1.front() : " << galist1.front();
    cout << "\ngalist1.back() : " << galist1.back();

    cout << "\nList 1 (galist1) is : ";
    showlist(galist1);

    cout << "\nList 2 (galist2) is : ";
    showlist(galist2);

    cout << "\ngalist1.front() : " << galist1.front();
    cout << "\ngalist1.back() : " << galist1.back();

    cout << "\ngalist1.pop_front(): ";
    galist1.pop_front();
    showlist(galist1);

    cout << "\ngalist2.pop_back() : ";
    galist2.pop_back();
    showlist(galist2);

    cout << "\ngalist1.reverse() : ";
    galist1.reverse();
    showlist(galist1);

    cout << "\ngalist2.sort(): ";
    galist2.sort();
    showlist(galist2);

    return 0;
}