#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
using namespace std;

string scramble(const string &text)
{
    string chars = text;
    for (int i = 0; i < chars.length(); i++)
    {
        int j = rand() % chars.length();
        char temp = chars[i];
        chars[i] = chars[j];
        chars[j] = temp;
    }
    return chars;
}

int main()
{

    string words[] = {"lion", "antelope", "tiger"};

    for (int i = 0; i < 3; i++)
    {
        string text;
        text = words[i];
        string scrambled = scramble(text);
        string answer;

        cout << "Scrambled: " << scrambled << endl;
        cout << "Guess the unscrambled word:" << endl;
        cin >> answer;

        if (answer == text)
        {
            cout << "Congratulations! The word was " << text << endl;
        }
        else
        {
            cout << "WRONGGGGGGGG!!!" << endl;
        }

        string next;
        cout << "Do you want to continue? Yes or No" << endl;
        cin >> next;

        if (next == "No")
        {
            break;
        }
    }

    return 0;
}