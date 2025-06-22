// 4.  Write a program in C++ to enter any number and print all factors of the number.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    cout<<"Factors of "<<num<<" = ";

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}