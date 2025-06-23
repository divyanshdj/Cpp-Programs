#include <iostream>
using namespace std;

class demo
{
private:
    int a;
    int b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }

    void show()
    {
        cout << "Value of A is " << a << " and B is " << b << endl;
    }

    void operator -()
    {
        a=-a;
        b=-b;
    }
};

int main()
{
    demo obj(-10,20);
    obj.show();
    -obj;
    obj.show();
    return 0;
}