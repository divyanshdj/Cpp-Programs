/*

11. Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).

*/

#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "Enter the character : ";
  cin >> ch;

  //   1st Method

  if (ch >= 'a' && ch <= 'z')
  {
    cout << "Lowercase" << endl;
  }
  else
  {
    cout << "Uppercase" << endl;
  }

  //   2nd Method

  //   int(ch)>=97 && int(ch)<=122 ? cout<<"Lowercase" : cout<<"Uppercase";

  return 0;
}