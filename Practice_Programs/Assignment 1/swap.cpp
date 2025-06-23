/*

5. Write a program for swapping of two numbers using with third variable.

6. Write a program for swapping of two number without using third variable.

*/

#include <iostream>
using namespace std;

void swapNumberWithThirdVariable(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapNumberWithoutThirdVariable(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

int main()
{
    int a = 10, b = 20;
    int c = 50, d = 60;
    cout << "Before Swapping : " << a << " " << b << endl;
    swapNumberWithoutThirdVariable(a, b);
    cout << "After Swapping : " << a << " " << b << endl;

    cout << "Before Swapping : " << c << " " << d << endl;
    swapNumberWithoutThirdVariable(c, d);
    cout << "After Swapping : " << c << " " << d << endl;
    return 0;
}