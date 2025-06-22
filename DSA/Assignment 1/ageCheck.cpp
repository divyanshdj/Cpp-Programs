/*

13. Take input of age of 3 people by user and determine oldest and youngest
among them.

*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the Age of Person 1 : ";
    cin >> a;
    cout << "Enter the Age of Person 2 : ";
    cin >> b;
    cout << "Enter the Age of Person 3 : ";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Person 1 is Oldest" << endl;
            if (b > c)
            {
                cout << "Person 3 is Youngest" << endl;
            }
            else
            {
                cout << "Person 2 is Youngest" << endl;
            }
        }
        else
        {
            cout << "Person 3 is Oldest" << endl;
            cout << "Person 2 is Youngest" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Person 2 is Oldest" << endl;
            if (a > c)
            {
                cout << "Person 3 is Youngest" << endl;
            }
            else
            {
                cout << "Person 1 is Youngest" << endl;
            }
        }
        else
        {
            cout << "Person 3 is Oldest" << endl;
            cout << "Person 1 is Youngest" << endl;
        }
    }

    return 0;
}