#include <iostream>
using namespace std;

int update(int n){
    n -= 15;
    return n;
}

int main()
{
    int n = 15;
    update(n);
    cout<<n<<endl;
    return 0;
}