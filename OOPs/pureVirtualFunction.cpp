#include <iostream>
using namespace std;

class Dummy1{
    public:
    virtual void sum()=0;
};

class Dummy2{
    int a=20, b=40;
    public:
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){

    Dummy2 d2;
    d2.show();

    return 0;
}