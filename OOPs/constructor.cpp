#include <iostream>
using namespace std;

class Dummy {
    int a;
    int b;
    int *p;

public:
    // Default Constructor
    Dummy(){

    }

    // Parameterized Constructor
    Dummy(int x, int y, int z) {
        a=x;
        b=y;
        p=new int(z);
    }

    // Copy Constructor
    Dummy(const Dummy &ref){
        a=ref.a;
        b=ref.b;
        p=new int(*ref.p);
    }

    // Destructor
    ~Dummy() {
        delete p;
        cout<<"Delete"<<endl;
    }

    void getValue() const {
        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
        cout << "*p : " << *p << endl;
    }
};

int main() {
    Dummy d1(5, 8, 10);

    Dummy d2 = d1; // Copy Constructor

    // Uncomment to test copy assignment operator
    // Dummy d2;
    // d2 = d1;

    d1.getValue();
    d2.getValue();

    return 0;
}
