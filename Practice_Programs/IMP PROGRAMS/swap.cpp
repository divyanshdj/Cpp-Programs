/*

Q.1.Design a C++ program to overload swap function to swap two integers, two floats and two characters respectively.

*/

#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 3.14, float2 = 6.28;
    char char1 = 'A', char2 = 'B';

    cout << "Before swapping:\n";
    cout << "Integers: " << int1 << ", " << int2 << endl;
    cout << "Floats: " << float1 << ", " << float2 << endl;
    cout << "Characters: " << char1 << ", " << char2 << endl;

    swap(int1, int2);

    swap(float1, float2);

    swap(char1, char2);

    cout << "\nAfter swapping:\n";
    cout << "Integers: " << int1 << ", " << int2 << endl;
    cout << "Floats: " << float1 << ", " << float2 << endl;
    cout << "Characters: " << char1 << ", " << char2 << endl;

    return 0;
}
