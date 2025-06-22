#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;   // To Extract Each Bit of Number
        ans = (bit * pow(10, i)) + ans; // To Calculate Each Bit Multiply With 10^(0,1,2...)
        n = n >> 1;  // To Shift 1 Bit on Right Side
        i++;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Number to Convert in Binary :- ";
    cin >> n;

    int copy = n;

    if (n < 0)
    {
        n = -n;
        int ans = decimalToBinary(n);

        int newAns = (~ans); //Bitwise NOT to Perform 1's Complement
        newAns = newAns + 1; //2's Complement
        cout << "Binary Conversion of " << copy << " = " << newAns << endl;
    }
    else
    {
        int ans = decimalToBinary(n);
        cout << "Binary Conversion of " << copy << " = " << ans << endl;
    }
}