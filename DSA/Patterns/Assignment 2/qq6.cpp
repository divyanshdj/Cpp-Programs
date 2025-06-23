#include <iostream>
using namespace std;

// Q.  1
//     * *
//     2 3 4
//     * * * * 
//     5 6 7 8 9
//     * * * * * * 

int main()
{
    int n = 6;

    int num = 1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i)
        {
           if(i%2 != 0){
            cout<<num<<"  ";
            num++;
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
