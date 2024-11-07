#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout << "This program checks whether letter is a vowel or consonant" << endl;
    cout << "Enter a letter" << endl;
    cin >> letter;

    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
    {
        cout << "Letter inputted is a consonant";
    }
    else
    {
        cout << "Letter is a vowel";
    }
}