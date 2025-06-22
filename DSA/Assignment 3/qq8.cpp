#include <iostream>
using namespace std;

// Q.  A B C D E
//     F       G
//     H       I
//     J       K
//     L M N O P

int main()
{
    int n = 5;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
           if(i == 1 || i == n || j == n || j == 1){
            cout<<chr<<" ";
            chr++;
           }else{
            cout<<"  ";
           }
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
