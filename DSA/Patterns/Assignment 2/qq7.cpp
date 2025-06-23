#include <iostream>
using namespace std;

// Q. *
//    E F
//    * * *
//    G H I J
//    * * * * *
//    K L M N O P

int main()
{
    int n = 6;

    char chr = 69;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i)
        {
           if(i%2 == 0){
            cout<<chr<<"  ";
            chr++;
           }else{
            cout<<"*  ";
           }
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
