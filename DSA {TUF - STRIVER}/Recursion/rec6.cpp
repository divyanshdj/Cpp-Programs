#include <iostream>
using namespace std;

int fibNum(int n){
    if(n<=1){
        return n;
    }
    return fibNum(n-1) + fibNum(n-2);
}
int main()
{
    int f;
    cout << "Enter the number to find Fibonacci Number: ";
    cin >> f;
    cout << f << " : "<< fibNum(f) << endl;
    return 0;
}