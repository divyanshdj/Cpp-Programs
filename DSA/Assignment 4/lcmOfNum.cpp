// 3.  Write a program in C++ to find the LCM of any two numbers.

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int result = lcm(num1, num2);

    cout << "LCM of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
