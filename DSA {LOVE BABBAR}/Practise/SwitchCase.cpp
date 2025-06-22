#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number = ";
    cin >> num;

    int copy = num;

    cout << endl;

    int ans = 1, hundred = 1, fifty = 1, twenty = 1, ones = 1;

    switch (ans)
    {
    case 1:
        hundred = num / 100;
        num = num - (hundred * 100);
        switch (ans)
        {
        case 1:
            fifty = num / 50;
            num = num - (fifty * 50);
            switch (ans)
            {
            case 1:
                twenty = num / 20;
                num = num - (twenty * 20);
                switch (ans)
                {
                case 1:
                    ones = num / 1;
                    num = num - (ones * 1);
                    break;
                }
            }
        }
    }

    cout << "No. of Notes for " << copy << ":-" << endl;

    cout << "Hundreds = " << hundred << " Notes" << endl;
    cout << "Fiftys = " << fifty << " Notes" << endl;
    cout << "Twentys = " << twenty << " Notes" << endl;
    cout << "Ones = " << ones << " Notes" << endl;

    return 0;
}