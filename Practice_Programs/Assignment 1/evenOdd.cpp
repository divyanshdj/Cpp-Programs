/*

14.  Write a program to check whether a given number is even or odd.

*/

#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter the Number : ";
    cin >> num;

    // 1st Method

        if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }

    // 2nd Method

    //     (num & 1)
    //     ? cout << "Odd" << endl
    //     : cout << "Even" << endl;

    return 0;
}