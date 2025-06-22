/*
    1 2 3 4 5
            A
            B
            C
            D
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout << "Enter Number : ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        if (i == 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << j << " ";
            }
            cout<<endl;
        }
        for (int space = 1; space < n; space++)
        {
            cout << "  ";
        }
        for(int k = 1; k<=1 ; k++){
            cout<<ch<<" ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}