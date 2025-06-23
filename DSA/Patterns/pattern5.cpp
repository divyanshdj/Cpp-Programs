#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++) 
        {
            char ch = 'A' + i + j - 2;
            /*
                Pattern :-
                A B C D 
                B C D E 
                C D E F 
                D E F G 
            */

            /*
                Pattern If In 2nd Loop (j<=i) :-
                A 
                B C 
                C D E 
                D E F G 
            */
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}

