/*

17. Write a program to check whether a triangle is Equlateral, Isosceles or
Scalene.

*/

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;

  cout << "Enter the First Side : ";
  cin >> a;
  cout << "Enter the Second Side : ";
  cin >> b;
  cout << "Enter the Third Side : ";
  cin >> c;

  if (a == b)
  {
    if (b == c)
    {
      cout << "Triangle is Equilateral" << endl;
    }
    else
    {
      cout << "Triangle is Isosceles" << endl;
    }
  }
  else
  {
    if (b == c || a == c)
    {
      cout << "Triangle is Isosceles" << endl;
    }
    else
    {
      cout << "Triangle is Scalene" << endl;
    }
  }
  return 0;
}