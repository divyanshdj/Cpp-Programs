#include <iostream>
using namespace std;

// Q.      A
//         B
//     C D E F G
//         H
//         I

int main()
{
    int n = 5;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n)
        {
           if(i == 3 ||  j == 3){
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
