#include <iostream>
using namespace std;

int fact(int f){
    int ans=1;
    for(int i=1 ; i<=f ; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){

    int num = fact(n);

    int denum = fact(r) * fact(n-r);

    return num/denum;

} 

int main()
{
    int n;
    cout<<"Enter 'n' = ";
    cin>>n;

    cout<<endl;

    int r;
    cout<<"Enter 'r' = ";
    cin>>r;

    cout<<endl;

    cout<<"Solution of nCr = "<<nCr(n,r)<<endl;

    return 0;
}