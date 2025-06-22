#include <iostream>
using namespace std;

// Q.  1 2 3 4 5
//            A
//          B
//        C
//      D

int main(){
    int n = 5;

    char chr = 65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
        if(i==1){
            cout<<j<<" ";
        }else if(j==n-i+1){
            cout<<chr<<" ";
            chr++;
        }else{
            cout<<"  ";
        }
    }
    cout<<endl;
    }

    return 0;
}