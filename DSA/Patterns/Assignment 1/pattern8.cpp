/*

A B C D E
F       G
H       I
J       K
L M N O P

*/

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 0 || i == 4)
            {
                cout << ch << " ";
                ch++;
            }
            else
            {
                if (j == 1 || j == 5)
                {
                    cout << ch << " ";
                    ch++;
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}