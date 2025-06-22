#include <iostream>
using namespace std;


// Q.   a     1     A
//         b  2  B
//      *  *  3  *  * 
//         C  4  c
//      D     5     d


int main()
{
    int n = 5;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
          if(j == 3){
            cout<<i<<"  ";
          }else if(j == i){
            cout<<char(chr+32)<<"  ";
          }else  if(i == 3){
            cout<<"*  ";
          }else if(j == n-i+1){
            cout<<chr<<"  ";
          }else{
            cout<<"   ";
          }
          
           j++;
        }
        if(i != 3){
        chr++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
