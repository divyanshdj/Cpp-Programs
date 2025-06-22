#include <iostream>
using namespace std;

class MyClass {
public:
    static int staticVariable; // Declaration of static member variable
};

int MyClass::staticVariable = 10; // Definition and initialization of static member variable

int main() {
    std::cout << MyClass::staticVariable << std::endl; // Accessing static member variable
    return 0;
}
