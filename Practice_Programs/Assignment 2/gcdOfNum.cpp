// 2.  Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << "GCD of " << num1 << " and " << num2 << " = " << i << endl;
            break;
        }
    }

    return 0;
}
