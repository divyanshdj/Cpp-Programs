#include <iostream>
using namespace std;

class Car
{
public:
     void f1(){
        cout<<"f1 Car"<<endl;
     }

     void f2(){
        cout<<"f2 Car"<<endl;
     }

     void f3(){
        cout<<"f3 Car"<<endl;
     }

     void f4(){
        cout<<"f4 Car"<<endl;
     }
};

class SportCar : public Car
{
public:
    void f1(){
        cout<<"f1 SportCar"<<endl;
     }

     void f2(){
        cout<<"f2 SportCar"<<endl;
     }

     void f4(){
        cout<<"f4 SportCar"<<endl;
     }
};

int main()
{
    SportCar s;
    s.f1();
    s.f2();
    s.f3();
    s.f4();


    return 0;
}