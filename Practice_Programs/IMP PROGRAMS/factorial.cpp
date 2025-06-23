/*

Q.2.Write an inline function factorial (int x) which returns the factorial of value x. Test the function by reading values from the keyboard. 

*/

#include <iostream>

using namespace std;

inline int factorial(int x) {
    int result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;
    
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
