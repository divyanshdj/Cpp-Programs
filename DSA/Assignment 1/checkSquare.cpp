/*

12. Take values of length and breadth of a rectangle from user and check if it is square or not.

*/

#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "Enter the Length of a rectangle : ";
    cin >> length;
    cout << "Enter the Breadth of a rectangle: ";
    cin >> breadth;

    if (length == breadth)
    {
        cout << "It is a Square" << endl;
    }
    else
    {
        cout << "It is a Rectangle" << endl;
    }

    return 0;
}