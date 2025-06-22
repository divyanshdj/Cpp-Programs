#include <iostream>
using namespace std;

class Dummy
{
    int a, b;

public:
    Dummy() {}

    Dummy(int x, int y)
    {
        a = x;
        b = y;
    }

    Dummy operator-()
    {
        Dummy temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }

    void showData()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }
};

int main()
{
    Dummy d1(3, 7);
    // Dummy d2(2, 6);

    Dummy d3 = -d1;

    d3.showData();

    return 0;
}