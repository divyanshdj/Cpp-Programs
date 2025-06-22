/*

11. A - - - - - - - - B
    C D - - - - - - E F
    G - H - - - - I - J
    K - - L - - M - - N
    O - - - P Q - - - R

*/
#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == i || j == 10 - i - 1 || j == 0 || j == 10 - 1)
            {
                cout << ch++ << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
