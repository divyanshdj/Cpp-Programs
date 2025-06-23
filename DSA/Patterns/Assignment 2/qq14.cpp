#include <iostream>
using namespace std;

// Q.  1  
//     C  D
//     4  5  6
//     H  I  J  K
//     11  12  13  14  15
//     Q  R  S  T  U  V

int main()
{
    int n = 6;

    char chr = 66;
    int num = 1;
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i)
        {
            if(i%2 != 0){
                cout<<num<<"  ";
            }else{
                cout<<chr<<"  ";
            }
            chr++;
            num++;
           j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
