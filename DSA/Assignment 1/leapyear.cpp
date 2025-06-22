/*

9. Write a program find leap year or not.

*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year : ";
    cin >> year;

    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a Leap Year" << endl;
    }

    return 0;
}