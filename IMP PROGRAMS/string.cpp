
#include <iostream>
#include <string>
using namespace std;

class StringC
{
private:
    string s;

public:
    StringC(string &str){
        s=str
    };

    StringC operator +(StringC &S1, StringC &S2, StringC &S3)
    {
        StringC temp;
        temp.s = S1.s + S2.s + S3.s;
        return temp;
    }

    void getdata(){
        cout << " enter no : ";
        cin >> s;
    }

    void display()
    {
        cout << "NAME = " << s << endl;
    }
};

int main()
{
    StringC S1, S2, S3;

    S1.getdata();
    S2.getdata();
    S3.getdata();

    StringC S4 = S1 + S2 + S3; // Concatenating using operator overloading

    S4.display();

    return 0;
}
