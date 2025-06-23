/*

7. Write a program for check maximum number in two numbers.

8. Write a Program for check maximum number in three numbers.

*/

#include <iostream>
using namespace std;

int maxAmongTwoNumbers(int num1, int num2)
{
    int max;
    if (num1 > num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    return max;
}

int maxAmongThreeNumbers(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    return max;
}

int main()
{
    int choice, num1, num2, num3;

    cout << "Choice to Find Maximum Number Below : " << endl;
    cout << "1 -> Maximum Among Two Numbers" << endl;
    cout << "2 -> Maximum Among Three Numbers" << endl;
    cout << "----------------------------------" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "Enter First Number : ";
        cin >> num1;
        cout << "Enter Second Number : ";
        cin >> num2;
        cout << "Maximum Number is : " << maxAmongTwoNumbers(num1, num2) << endl;
        break;
    }
    case 2:
    {
        cout << "Enter First Number : ";
        cin >> num1;
        cout << "Enter Second Number : ";
        cin >> num2;
        cout << "Enter Third Number : ";
        cin >> num3;
        cout << "Maximum Number is : " << maxAmongThreeNumbers(num1, num2, num3) << endl;
        break;
    }
    default:
    {
        cout << "Invalid Choice!" << endl;
    }
    }

    return 0;
}