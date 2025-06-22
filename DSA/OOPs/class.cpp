#include <iostream>
using namespace std;

class Addition
{

    // public:
    int a;
    int b;

public:
    void setValue()
    {
        // a=x;
        // b=y;
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "Enter the value of b : ";
        cin >> b;
    }

    void getValue()
    {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }

    void sum()
    {
        cout << "Sum = " << a + b << endl;
    }
};

int main()
{
    Addition a1;
 

    a1.setValue();
    a1.getValue();
    a1.sum();

    return 0;
}