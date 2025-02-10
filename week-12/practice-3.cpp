#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <unistd.h>

using namespace std;

vector<int> vec;

void push()
{
    for (int i = 0; i <= 10; ++i)
    {
        cout << "Push " << i << endl;
        // this_thread::sleep_for(chrono::milliseconds(100));
        vec.push_back(i);
    }
}

void pop()
{
    for (int i = 0; i <= 10; ++i)
    {
        if (vec.size() > 0)
        {
            int val = vec.back();
            vec.pop_back();
            cout << "Pop " << val << endl;
            // this_thread::sleep_for(chrono::milliseconds(500));
        }
    }
}

int main()
{
    // create two threads
    thread t1(push);
    thread t2(pop);
    t1.join();
    t2.join();
    return 0;
}