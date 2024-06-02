#include <iostream>
using namespace std;

class date {

    private:
    int day, month, year;

    public:
    void getdata();
    void display(){
        std::cout<<"Date is :-";
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

void date::getdata(){
    cout<<"Enter Date (DD/MM/YYYY) :- ";
    cin>>day>>month>>year;
}

int main(){
    date d1,d2;
    cout<<"Day 1:- "<<endl;
    d1.getdata();
    cout<<"Day 2:-"<<endl;
    d2.getdata();
    cout<<"\n\n";
    d1.display();
    d2.display();
    return 0;
}

