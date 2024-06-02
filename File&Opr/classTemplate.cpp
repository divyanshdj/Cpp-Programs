#include <iostream>
using namespace std;

template <class T>
class demo
{
private:
    T a, b;

public:
    demo(T x, T y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A = " << a << " B = " << b << endl;
    }
};

int main()
{
    demo<int> obj1(30, 50); // className <dataType> classObject;
    demo<float> obj2(12.10, 67.40);
    obj1.show();
    obj2.show();
    return 0;
}