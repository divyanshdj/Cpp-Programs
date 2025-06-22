/*

*
E F
* * *
G H I J
* * * * *
K L M N O P

*/

#include <iostream>
using namespace std;
int main()
{
    char count = 'E';
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                cout << count << " ";
                count++;
            }
            else
            {
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
    return 0;
}