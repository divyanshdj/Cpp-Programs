#include <iostream>
using namespace std;

// Q. A                 B 
//    C D             E F
//    G   H         I   J
//    K     L     M     N
//    O       P Q       R


int main()
{
    int n = 5;

    char chr = 65;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=n*2)
        {
           if(j == 1 ||  j == n*2 || j == i || j == n*2 -i+1 ){
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
