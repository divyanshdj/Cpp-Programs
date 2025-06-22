/*

26. Write a program for find simple interest.
   S.I.= (P*R*T)/100
   P=200000,
   R=10%,
   T=2 Years

*/

#include <iostream>
using namespace std;
int main()
{
   int p, r, t;
   cout << "Enter the Prinicpal Amount : ";
   cin >> p;
   cout << "Enter the Rate of Interest : ";
   cin >> r;
   cout << "Enter the Time Period : ";
   cin >> t;

   cout << "Simple Interest is : " << (p * r * t) / 100 << endl;

   return 0;
}