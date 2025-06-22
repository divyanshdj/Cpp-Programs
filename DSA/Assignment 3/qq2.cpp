#include <iostream>
using namespace std;

// Q.  A 
//     B C 
//     D E F 
//     G H I J 
//     K L M N O 


int main()
{
    int n = 5;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i)
        {
           cout<<chr<<" ";
            chr++;
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
