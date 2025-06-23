// Static Local variables

#include <iostream>
using namespace std;

void fun(){
    static int x;
    int y;
    cout<<x<<endl;
    cout<<y<<endl;
}

int main(){
    fun();

    return 0;
}