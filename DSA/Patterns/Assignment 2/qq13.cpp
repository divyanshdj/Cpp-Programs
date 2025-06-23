#include <iostream>
using namespace std;


// Q.   1 2 3 4 5
//      *
//      *
//      A B C D E
//      *
//      *
//      *
//      *


int main()
{
    int n = 8;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=5)
        {
          if(i == 1){
            cout<<j<<" ";
          }
          if(i == n/2){
            cout<<char(chr++)<<" ";
          }
          if(i != 1 && i != n/2 && j == 1){
            cout<<"* ";
          }
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
