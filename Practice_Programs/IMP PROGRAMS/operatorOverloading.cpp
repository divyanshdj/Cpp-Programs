/*
Q.5. Write a program to overload binary plus operator (+) to add two complex numbers using member function.
*/

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0){
        real=r;
        imag=i;
    }

    Complex operator+(Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Result: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(15, 24); 
    Complex c2(5, 6); 

    Complex sum = c1 + c2; 

    sum.display();

    return 0;
}
