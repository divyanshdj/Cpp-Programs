/*

16. Write a program to check whether a triangle can be formed with the given values for the angles.

*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  cout << "Enter the Angle (1,2,3) : ";
  cin >> a >> b >> c;
  if (a + b + c == 180)
  {
    cout << "Triangle can be formed" << endl;
  }
  else
  {
    cout << "Triangle cannot be formed" << endl;
  }
  return 0;
}