#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if a string is palindrome

bool isPalindrome(string str)
{
    int length = str.length();
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return false;
        }
    }
    return true;
}

// Function to check if strings are Anagrams

bool isAnagram(string str1, string str2)
{
    int lenght1 = str1.length();
    int lenght2 = str2.length();
    if (lenght1 != lenght2)
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 != str2)
    {
        return false;
    }
    return true;
}

int main()
{
    string str1;
    string str2;

    cout << "Input first string:" << endl;
    cin >> str1;
    cout << "Input second string:" << endl;
    cin >> str2;

    if (isPalindrome(str1) && isPalindrome(str2))
    {
        cout << "Both strings are palindromes" << endl;
    }
    else if (isPalindrome(str1))
    {
        cout << str1 << " is a palindrome" << endl;
    }
    else if (isPalindrome(str2))
    {
        cout << str2 << " is a palindrome" << endl;
    }
    else
    {
        cout << "Both strings are not palindromes" << endl;
    };

    if (isAnagram(str1, str2))
    {
        cout << "The strings are Anagrams" << endl;
    }
    else
    {
        cout << "The strings are not Anagrams" << endl;
    }
}