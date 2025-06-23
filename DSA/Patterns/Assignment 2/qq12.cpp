#include <iostream>
using namespace std;

// Q. 1
//    0 1
//    1 0 1
//    0 1 0 1
//    1 0 1 0 1

int main(){
    int n=5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
           if(i%2 != 0){
            cout<<(j&1)<<" ";
           }else{
            cout<<(!(j&1))<<" ";
           }
        }
        cout<<endl;
    }

    return 0;
}