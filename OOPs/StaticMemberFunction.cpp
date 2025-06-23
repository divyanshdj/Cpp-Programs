#include <iostream>
using namespace std;

class Account{
    int balance;  // Instance Member variable
    static float roi;  // static Member Variable / Class Variable

    public:

    void setBalance(int b){
        balance=b;
        cout<<balance<<endl;
    }

    static void setRoi(float r){  // Static Member Function
        roi=r; 
        cout<<roi<<endl;
    }
};

float Account::roi=3.5f;

int main(){
    Account a , a2;

    a.setBalance(40000);

    a.setBalance(50000);

    a.setRoi(4.5f);
    Account::setRoi(4.5f);

    return 0;
}