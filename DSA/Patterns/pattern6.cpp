#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int j = n - i;
        while (j)
        {
            cout << " ";
            j--;
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
            /*
            Pattern :-
                  *
                * *
              * * *
            * * * *
            */
        }
        cout << endl;
    }
    return 0;
}

/*

for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k <= n-i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

Pattern :-

* * * *
* * *
* *
*

*/

/*

    for (int i = 1; i <= n; i++)
    {
        int j = i-1;
        while (j)
        {
            cout << " ";
            j--;
        }
        for (int k = 1; k <= n-i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

Pattern :-

* * * *
  * * *
    * *
      *

*/