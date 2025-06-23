#include <iostream>
using namespace std;

class demo{
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

    friend demo operator +(demo &obj , demo &obj1);
};

demo operator +(demo &obj , demo &obj1){
        demo temp;
        temp.a=obj.a+obj1.a;
        temp.b=obj.b+obj1.b;
        return temp;
    }

int main(){
    demo obj(10, 20), obj1(90, 80), obj2;
    obj.show();
    obj1.show();
    cout << endl;
    obj2 = obj + obj1;
    obj2.show();
    return 0;
}