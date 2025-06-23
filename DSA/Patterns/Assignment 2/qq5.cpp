#include <iostream>
using namespace std;

// Q.  0 1 1 1 0
//     1 1 1 1 1
//     1 1 0 1 1
//     1 1 1 1 1
//     0 1 1 1 0

int main(){
    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
           if(i==1&&j==1 || i==n&&j==n || i==n&&j==1 || i==1&&j==n ||i==3&&j==3){
            cout<<"0 ";
           }else{
            cout<<"1 ";
           }
        }
        cout<<endl;
    }

    return 0;
}