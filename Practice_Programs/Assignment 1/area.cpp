/*

23. Write a program for find area of a circle.

24. Write a program for find area of a square.

*/

#include <iostream>
using namespace std;
int main()
{

    int ch;

    cout << "Choice to Find Area of Shapes Below : " << endl;
    cout << "1 -> Circle" << endl;
    cout << "2 -> Square" << endl;
    cout << "----------------------------------" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        int radius;
        cout << "Enter Radius of Circle : ";
        cin >> radius;
        cout << "Area of Circle is : " << 3.14 * radius * radius << endl;
        break;
    }
    case 2:
    {
        int side;
        cout << "Enter Side of Square : ";
        cin >> side;
        cout << "Area of Square is : " << side * side << endl;
        break;
    }
    default:
    {
        cout << "Invalid Choice!" << endl;
        break;
    }
    }

    return 0;
}