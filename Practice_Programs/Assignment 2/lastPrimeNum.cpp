// 1. Write a program in C++ to find the last prime number that occurs before the entered number.  

// Sol. - 

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int j = 2; j < n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    for (int i = num - 1; i > 0; i--)
    {
        if (isPrime(i))
        {
            cout << "Last Prime = " << i << endl;
            break;
        }
    }

    return 0;
}