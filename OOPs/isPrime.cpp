#include <iostream>
using namespace std;

class Prime{
    int n;

    public:
    void setValue(){
        cout<<"Enter a Value : ";
        cin>>n;
    }

    void isPrime(){
        bool prime=true;
        if(n==0 || n==1){
            prime = false;
        }else{
            for(int i=2; i<n; i++){
                if(n%i==0){
                    prime=false;
                }
            }
        }
        
        if(prime==false){
            cout<<"Not a Prime Number"<<endl;
        }else{
            cout<<"Prime number"<<endl;
        }

    }
};

int main(){
    Prime p;

    p.setValue();

    p.isPrime();
    

    return 0;
}