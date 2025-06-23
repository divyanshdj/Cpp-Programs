/*

1. Write a program for sum of two numbers.

2. Write a program for subtract of two numbers.

3. Write a program for multiply of two numbers.

4. Write a program for divide of two numbers.

*/

#include <iostream>
using namespace std;

int main()
{
    char opr;
    cout << "Enter the operation (+,-,*,/) : ";
    cin >> opr;

    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {
        int a, b;
        cout << "Enter First Number : ";
        cin >> a;
        cout << "Enter Second Number : ";
        cin >> b;

        if (opr == '+')
        {
            cout << "Sum of two numbers is : " << a + b << endl;
        }
        else if (opr == '-')
        {
            cout << "Subtract of two numbers is : " << a - b << endl;
        }
        else if (opr == '*')
        {
            cout << "Multiply of two numbers is : " << a * b << endl;
        }
        else
        {
            cout << "Divide of two numbers is : " << a / b << endl;
        }
    }
    else
    {
        cout << "Invalid Operation!" << endl;
    }

    return 0;
}