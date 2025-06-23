/*

Q.3.Write a program to add two numbers using multiple inheritance in C++.

*/

#include <iostream>
using namespace std;

class Addition1 {
public:
    int num1;

    void getNumber1() {
        cout << "Enter first number: ";
        cin >> num1;
    }
};

class Addition2 {
public:
    int num2;

    void getNumber2() {
        cout << "Enter second number: ";
        cin >> num2;
    }
};

// Derived class inheriting from Addition1 and Addition2
class Sum : public Addition1, public Addition2 {
public:
    void displaySum() {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    }
};

int main() {
    Sum obj;

    obj.getNumber1();
    obj.getNumber2();

    obj.displaySum();

    return 0;
}
