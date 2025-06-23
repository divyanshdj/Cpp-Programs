/*

22. A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 45 - E
    c. 45 to 50 - D
    d. 50 to 60 - C
    e. 60 to 80 - B
    f. Above 80 - A
Ask user to enter marks and print the corresponding grade.

*/

#include <iostream>
using namespace std;
int main()
{

    int sub1, sub2, sub3, sub4, sub5;
    float total, avg;
    cout << "Enter the Physics Marks : ";
    cin >> sub1;
    cout << "Enter the Chemistry Marks : ";
    cin >> sub2;
    cout << "Enter the Maths Marks : ";
    cin >> sub3;
    cout << "Enter the Biology Marks : ";
    cin >> sub4;
    cout << "Enter the Computer Marks : ";
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    avg = total / 5;

    cout << "Total Marks : " << total << " & Percentage : " << avg << endl;

    if (avg < 25)
    {
        cout << "Grade is F" << endl;
    }
    else if (avg > 25 && avg < 45)
    {
        cout << "Grade is E" << endl;
    }
    else if (avg > 45 && avg < 50)
    {
        cout << "Grade is D" << endl;
    }
    else if (avg > 50 && avg < 60)
    {
        cout << "Grade is C" << endl;
    }
    else if (avg > 60 && avg < 80)
    {
        cout << "Grade is B" << endl;
    }
    else
    {
        cout << "Grade is A" << endl;
    }

    return 0;
}