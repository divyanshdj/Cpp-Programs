#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int num, denum;
    cout<<"Enter Numerator :";
    cin>>num;
    cout<<"Enter Denominator :";
    cin>>denum;

    try
    {
        if(denum==0)
        {
            throw(denum);
        }
        int result = num / denum;
        cout << "Result = " << result << endl;
    }

    catch (int denum)
    {
        cout <<"Denominator Can't be Zero because it leads to Undefined";
    }

    return 0;
}