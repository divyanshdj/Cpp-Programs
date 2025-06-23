#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // 1st Triangle
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // 2nd Triangle
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // 3rd Triangle
        int k = i - 1;
        while (k)
        {
            cout << k;
            k--;
        }

        cout << endl;
    }

    return 0;
}