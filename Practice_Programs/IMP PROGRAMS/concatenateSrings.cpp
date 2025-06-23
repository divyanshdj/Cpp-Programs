/*

Q.1. Write a C++ program to make a class named “string” which uses concept of operator overloading to concatenate two strings by (+) operator.

*/

#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    String(const string& s = "") : str(s) {}

    String operator+(const String& s) {
        String result(str + s.str);
        return result;
    }

    void display() {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    String s1("Hello ");
    String s2("world!");

    String s3 = s1 + s2; // Concatenating using operator overloading

    s3.display();

    return 0;
}
