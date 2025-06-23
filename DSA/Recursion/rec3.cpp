#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n + sum(n-1);
}

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    cout << "Sum of Number : " << sum(num) << endl;
    cout << "Factorial of Number: " << fact(num) << endl;
    return 0;
}