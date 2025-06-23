#include <iostream>
using namespace std;

class demo
{
private:
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "Value of A is " << a << " and B is " << b << endl;
    }
    friend void operator-(demo &obj);
};

void operator-(demo &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}

int main()
{
    demo obj(-100, 200);
    obj.show();
    -obj;
    obj.show();
    return 0;
}