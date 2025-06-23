#include <iostream>
using namespace std;

class Addition{
    int a=10, b=15, c;

    public:
    void sum(){
        c=a+b;
        cout<<"WithOut Parameters : "<<c<<endl;
    }

    void sum(int a, int b){
        int c;
        c=a+b;
        cout<<"With Parameters : "<<c<<endl;
    }
};

int main(){
    Addition a;

    a.sum(5,7);
    a.sum();

    return 0;
}