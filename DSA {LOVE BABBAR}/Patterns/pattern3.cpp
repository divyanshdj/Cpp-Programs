#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    /* int count=1;
    
            For Print the Pattern Like :-
            1
            2 3
            4 5 6 
            7 8 9 10

            cout<<count<<" ";
            count++;
    */

    /* char count='A'; 

            For Print the Pattern Like :-
            A
            B C
            D E F 
            G H I J

            cout<<count<<" ";
            count++;
    */

    for(int i=1; i<=n ;i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            cout<<"*"<<" "; // For Direct Print in Order *,**,***,****
            //  cout<<i;   For Print Numbers in Order 1,22,333,4444  
            //  cout<<j;   For Print Numbers in Sequence 1,12,123,1234
            //  cout<<n-j+1;  For No. in Reverse Sequence 4,43,432,4321
        }
        cout<<endl;
    }

    return 0;
}