/*
1 2 3 4 5
*
*
A B C D E
*
*
*
*
*/

#include <iostream>
using namespace std;

int main()
{
    char ch='A';
    for (int i = 1; i <= 5; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << j << " ";
            }
            cout<<endl;
        }
        if (i == 3)
        {
            for (int j = 1; j <= 5; j++)
            {
                cout << ch << " ";
                ch++;
            }
            cout<<endl;
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
