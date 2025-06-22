#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value = i;
        for (int j = 1; j <= i; j++)
        {
            cout << i-j+1 <<" "; 
            value++;
        }
        cout<<endl;
    }
    return 0;
}

/*
Pattern :- 

// Without using Another Variable (i+j-1)

1 
2 3 
3 4 5 
4 5 6 7 
5 6 7 8 9
*/

/*
Pattern :- 

// Without using Another Variable (i-j+1)

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/