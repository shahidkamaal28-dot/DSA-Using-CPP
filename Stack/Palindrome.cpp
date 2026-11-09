#include<iostream>
using namespace std;

#include"Stack.h"
#include<stack>

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    Stack s(str.length());

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

    bool palindrome = true;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != s.pop())
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }

    return 0;
}