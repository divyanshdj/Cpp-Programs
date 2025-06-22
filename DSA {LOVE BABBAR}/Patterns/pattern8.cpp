#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 0; i <= n; i++)
    {
        // 1st triangle
        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<j<<" ";
        }

        //2nd triangle
        for(int k=0;k<=i;k++)
        {
            cout<<"* ";
        }

        //3rd triangle
        for(int l=0; l<=i; l++)
        {
            cout<<"* ";
        }

        //4th triangle
        for(int m=n-i; m>=1; m--)
        {
            cout<<m<<" ";
        }

        cout<<endl;
    }
    return 0;
}