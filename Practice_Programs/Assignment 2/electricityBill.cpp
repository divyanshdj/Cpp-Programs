// 7.  Write a C++ program to input electricity unit charge and calculate the total electricity bill according to
// the given condition:
//       For first 50 units Rs. 0.50/unit
//       For next 100 units Rs. 0.75/unit
//       For next 100 units Rs. 1.20/unit
//       For unit above 250 Rs. 1.50/unit

#include <iostream>
using namespace std;

int main()
{
    int units;
    cout << "Unit Charges = ";
    cin >> units;

    double charge = 0;

    if (units <= 50)
    {
        charge = units * 0.50;
    }
    else if (units <= 150)
    {
        charge = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        charge = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        charge = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    cout << "Charge for " << units << " units = Rs. " << charge << endl;

    return 0;
}
