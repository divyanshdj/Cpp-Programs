#include <iostream>
using namespace std;

int main()
{
   int n;
   int i=1;
   cout<<"Enter Number for Pattern : ";
   cin>>n;

   while (i<=n)
   {
    int j=1;
    while (j<=n)
    {
        cout<<j;      //For Direct Number in Order 1234,1234,1234,1234
        // cout<<i;      //For Single Number in Line  1111,2222,3333,4444
        // cout<<n-j+1;  //For Reverse Print in Order 4321,4321,4321,4321
        j++;
    }
    cout<<endl;
    i++;
   }

return 0;
}