#include <iostream>
using namespace std;

class Bhati;

class Ravi{
    int money=50;
    public:
    friend void monu(Ravi, Bhati);
};

class Bhati{
    int money=100;
    public:
    friend void monu(Ravi, Bhati);
};

void monu(Ravi r1, Bhati r2){
    cout<<"Total : "<<r1.money+r2.money<<endl;
}

int main(){

    Ravi r;
    Bhati b;

    monu(r, b);


    return 0;
}