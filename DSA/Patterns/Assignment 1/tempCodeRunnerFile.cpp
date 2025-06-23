
#include <iostream>
using namespace std;

int main()
{
    char lowerCh = 'a';
    char upperCh = 'A';
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((j == 2 || j == 4) && (i == 1 || i == 5))
            {
                cout << " ";
            }
            if ((j == 1 || j == 5) && (i == 2 || i == 4))
            {
                cout << " ";
            }
            if (i == 3)
            {
                if (j != 3)
                {
                    cout << "* ";
                }
            }
            if (j == 3)
            {
                cout << i << " ";
            }
            if (i == j && j != 3)
            {
                cout << " " << lowerCh << " ";
                lowerCh++;
            }
            if (((i == 1 && j == 5) || (i == 2 && j == 4) || (i == 4 && j == 2) || (i == 5 && j == 1)) && j != 3)
            {
                cout << " " << upperCh << " ";
                upperCh++;
            }
        }
        cout << endl;
    }
    return 0;
}
