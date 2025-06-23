// Q. Print the Number 1-N Times using Recursion

#include <iostream>
using namespace std;

void printForward(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    printForward(i + 1, n);
}

void printBackward(int i, int n)
{
    if (i < n)
    {
        return;
    }
    cout << i << " ";
    printBackward(i - 1, n);
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Printing in Forward Order: ";
    printForward(1, n);
    cout << "\n";
    cout << "Printing in Backward Order: ";
    printBackward(n, 1);
    return 0;
}