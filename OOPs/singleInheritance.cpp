#include <iostream>
using namespace std;

class DadaJi
{
protected:
    string dadaji_name;
    string surName;

public:
    void SetName(string name, string sName)
    {
        dadaji_name = name;
        surName = sName;
    }

    void getName()
    {
        cout << "Name : " << dadaji_name << endl;
      cout << "SurName : " << surName << endl;
    }
};

class Papaji : public DadaJi
{
    string papa_name;
    string surName;

    void nacho(){
        cout<<"Dhum t na na"<<endl;
    }
};

int main()
{
    DadaJi d;

    d.SetName("RamKishor", "Saini");
    d.getName();

    Papaji p;

    p.SetName("Mahesh ji", "Sharma");
    p.getName();

    return 0;
}