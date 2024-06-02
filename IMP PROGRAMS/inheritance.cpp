/* Q.2. Design two classes to show the multiple Inheritance. How does an object of derived class access the member
of base class. */

#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Displaying from Base1" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Displaying from Base2" << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "Displaying from Derived" << endl;
    }
};

int main() {
    Derived obj;

    obj.display1();
    obj.display2();
    obj.display();

    return 0;
}
