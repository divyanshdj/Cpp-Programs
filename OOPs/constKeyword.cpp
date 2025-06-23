#include <iostream>
using namespace std;

class MyClass
{
    int a,b;
    public:

    MyClass(const int x, const int y){
        a=20;
        b=20;
        a=x;
        b=y;
    }

    void display(){
        cout<<a+b<<endl;
    }
};

int main()
{
    MyClass m(30,40);


    m.display();

    // int a=10;
    // cout<<a<<endl;

    // a=5;
    // cout<<a<<endl;

    return 0;
}