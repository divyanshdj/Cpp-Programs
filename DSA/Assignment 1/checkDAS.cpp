/*

18. Write a program to check whether a character is an alphabet, digit or special character.

*/

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "Alphabet" << endl;
    }
    else if (int(ch) >= 48 || 57 <= int(ch))
    {
        cout << "Digit" << endl;
    }
    else
    {
        cout << "Special Character" << endl;
    }

    return 0;
}