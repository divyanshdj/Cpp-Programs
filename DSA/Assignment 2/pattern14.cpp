/*
1
C  D
4  5  6
H  I  J  K
11  12  13  14  15
Q  R  S  T  U  V
*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'B';
    int count=1;
    for (int i = 1; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<ch<<" ";
                ch++;
                count++;
            }
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                cout<<count<<" ";
                count++;
                ch++;
            }
        }
        cout<<endl;
    }
    return 0;
}
