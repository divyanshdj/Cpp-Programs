#include <iostream>
using namespace std;

class ArithmeticOperator{
    protected:
    int a=40, b=30;

    public:

    void sum(){
        cout<<"sum : "<<a+b<<endl;
    }
};

class Sum : public ArithmeticOperator{
    public:
    void sub(){
        cout<<"sub : "<<a-b<<endl;
    }
};

class Sub: public Sum{
    public:
    void multi(){
        cout<<"Multi : "<<a*b<<endl;
    }
};

class Multi: public Sub{
    public:
    void div(){
        cout<<"Div : "<<a/b<<endl;
    }
};

class Div: public Multi{

};

int main(){
    ArithmeticOperator ao;

    Sum s;
    s.sum();

    Sub su;
    su.sub();

    Multi m;
    m.multi();

    Div d;
    d.div();

    return 0;
}