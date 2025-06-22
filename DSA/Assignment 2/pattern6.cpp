/*

1
* *
2 3 4
* * * *
5 6 7 8 9
* * * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int count=1;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << "*" << " ";
            }
            else{
                cout<<count<<" ";
                count++;
            }
        }
        cout << endl;
    }
    return 0;
}