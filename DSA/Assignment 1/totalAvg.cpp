/*

25. Write a Program for find total and average of five subjects.

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

    return 0;
}