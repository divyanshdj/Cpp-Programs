/*

   1
  2 3
 4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main()
{
    int count = 1;

    for (int i = 1; i <= 4; i++)
    {
        for(int space=4 ; i<=space ; space--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout << endl;
    }
    return 0;
}