/*

20. Write a program to check whether a given number is positive or negative or
zero.

*/

#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "Enter Number : ";
    cin >> num;

    if (num > 0)
    {
        cout << "Number is Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "Number is Negative" << endl;
    }
    else
    {
        cout << "Number is Zero" << endl;
    }

    return 0;
}