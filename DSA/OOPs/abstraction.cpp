#include <iostream>
using namespace std;

class Car{
    bool startEngin=true;   // data hide in private

    public:
    void Drive(){
        if(startEngin==true){
            cout<<"Chl Ghumne chlte h"<<endl;
        }else{
            cout<<"Phle start to kr le"<<endl;
        }
    }
};

int main(){
    Car c;
    c.Drive();
    return 0;
}