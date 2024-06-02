#include <iostream>
using namespace std;

class X;
class Z;
class Y{
    private:
    int value1;

    public:
    void data(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout<<"Value 1 :- "<<value1<<endl;
    }
    friend void add(Y&,X&,Z&);
};

class X{
    private:
    int value2;

    public:
    void data(int a)
    {
        value2 = a;
    }
    void display()
    {
        cout<<"Value 2 :- "<<value2<<endl;
    }
    friend void add(Y&,X&,Z&);
};
class Z{
    private:
    int value3;

    public:
    void data(int a)
    {
        value3 = a;
    }
    void display()
    {
        cout<<value3<<endl;
    }
    friend void add(Y&,X&,Z&);
};

void add(Y &a, X &b, Z &c)
{
    c.value3 = a.value1 + b.value2;
}

int main()
{
    Y n1;
    X n2;
    Z n3;
    int u1,u2;
    cout<<"Enter First Number :- ";
    cin>>u1;
    cout<<"Enter Second Number :- ";
    cin>>u2;
    n1.data(u1);
    n2.data(u2);
    cout<<"\n\n";
    n1.display();
    cout<<"\n";
    n2.display();
    cout<<"\n\n";
    add(n1,n2,n3);
    cout<<"Addition = ";
    n3.display();
    return 0;
}

