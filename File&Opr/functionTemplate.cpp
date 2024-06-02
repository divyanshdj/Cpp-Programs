#include <iostream>
using namespace std;

template <class demo>

void show(demo a, demo b)
{
    cout << "A = " << a << " B = " << b << endl;
}

int main()
{
    int p = 20, q = 30;
    float r = 30.12, s = 40.34;
    char num1 = 'a', num2 = 'b';

    show(p, q);
    show(r, s);
    show(num1, num2);
    
    return 0;
}