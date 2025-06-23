#include <iostream>
using namespace std;

class Car{
    string sportCar;
    string simpleCar;

    public:
    void setCar(string sp, string si){
        sportCar=sp;
        simpleCar=si;
    }

    void show(){
        cout<<sportCar<<endl;
        cout<<simpleCar<<endl;
    }
};

int main(){
    Car c;

    c.setCar("f1", "swift");
    c.show();

    return 0;
}