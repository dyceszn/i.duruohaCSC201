#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <chrono>
using namespace std;

vector<int> vec;
mutex m;

void push()
{
    m.lock();
    for (int i = 0; i != 10; ++i)
    {
        cout << "Push " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        vec.push_back(i);
    }
    m.unlock();
}

void pop()
{
    m.lock();
    for (int i = 0; i != 10; ++i)
    {
        if (vec.size() > 0)
        {
            int val = vec.back();
            vec.pop_back();
            cout << "Pop " << val << endl;
            this_thread::sleep_for(chrono::milliseconds(500));
        }
    }
    m.unlock();
}

int main()
{
    // create two threads
    thread t1(push);
    thread t2(pop);
    t1.join();
    t2.join();
}