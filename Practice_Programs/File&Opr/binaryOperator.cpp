#include <iostream>
using namespace std;

class demo
{
private:
    int a, b;

public:
    demo(){}

    demo(int x, int y){
        a = x;
        b = y;
    }

    void show(){
        cout << "Value of A is " << a << " and B is " << b << endl;
    }

    demo operator+(demo obj){
        demo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    demo obj(-100, 200), obj1(40, -70), obj2;
    obj.show();
    obj1.show();
    cout << endl;
    obj2 = obj + obj1;
    obj2.show();
    return 0;
}