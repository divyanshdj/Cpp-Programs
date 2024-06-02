#include <iostream>
#include <stdexcept>

using namespace std;

void readNumbers(double& num1, double& num2) {
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
}

double divideNumbers(double num1, double num2) {
    if (num2 == 0) {
        throw runtime_error("Cannot divide by zero.");
    }
    return num1 / num2;
}

int main() {
    double num1, num2;
    
    try {
        readNumbers(num1, num2);
        double result = divideNumbers(num1, num2);
        cout << "Result of division: " << result << endl;
    }
    catch (runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
