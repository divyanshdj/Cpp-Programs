#include <iostream>
using namespace std;

class Lion{
    public:
        void roar(){
            cout<<"dhaa dhaa"<<endl;
        }
};

class Dog{
    public:
    void bark(){
        cout<<"Bhau Bhau"<<endl;
    }
};

class Cat{
    public:
    void meow(){
        cout<<"meow meow"<<endl;
    }
};

class Animal : public Lion, public Dog, public Cat{
    public:
        void speak(){
            cout<<"Animal Can't Speak"<<endl;
        }
};

int main(){
    Animal a;

    a.meow();
    a.bark();
    a.roar();

    a.speak();
    return 0;
}