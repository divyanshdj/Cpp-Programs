#include<iostream>
using namespace std;

// Function to calculate factorial of a number using recursion
int fact(int n){
    // Base case: factorial of 0 or 1 is 1
    if(n <= 1) return 1;
    // Recursive case: n! = n * (n-1)!
    return n * fact(n-1);
}

int main(){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if(n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is " << fact(n) << endl;
    }

    return 0;
}