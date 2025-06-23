/*
1 2 3 4 5
        A
      B
    C
  D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout << "Enter Number : ";
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        for (int space = n - i - 1 ; space != 0; space--)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}