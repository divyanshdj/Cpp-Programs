#include <iostream>
using namespace std;

class A{
    int a,b;
    public:

    A(){}

    A(int x, int y){
        a=x;
        b=y;
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }
    friend class B;
};

class B{
    int a, b;

    public:

    B(){}

    B(A &ref){
       a=ref.a;
       b=ref.b; 
    }

    void showData(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){
    A a(5,7);
    B b(a);

    a.show();
    b.showData();

    return 0;
}