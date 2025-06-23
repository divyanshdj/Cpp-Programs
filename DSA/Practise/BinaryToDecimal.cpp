#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Binary Number to Convert in Decimal :- ";
    cin >> n;

    int copy = n;

    int ans = 0, i = 0;

    while (n != 0)
    {
        int digit = n % 10;  // To Extract Each Digit From The Number
        if (digit == 1)
        {
            ans = (digit * pow(2, i)) + ans;  // To Calculate Each Digit Multiply With 2^(0,1,2...)
        }
        n = n / 10; // To Delete Last Digit of Number
        i++;
    }

    cout << endl;
    cout << "Decimal Conversion of " << copy << " = " << ans << endl;

    return 0;
}