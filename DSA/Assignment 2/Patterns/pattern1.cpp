#include <iostream>
using namespace std;

void patternUpTriangle(int n) {

  /*
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *
  * * * * * * * * * * *

  */

  for (int i = 0; i <= n; i = i + 2) {
    for (int space = 1; space < n - i; space++) {
      cout << " ";
    }
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void patternDownTriangle(int n) {
  /*

  * * * * * * * * * * * 
    * * * * * * * * *   
      * * * * * * *     
        * * * * *       
          * * *         
            *  

  */

  for (int i = 1; i <= n; i=i+2){
    for (int space = 0; space < i - 1; space++) {
      cout << " ";
    }
    for(int star=0 ; star <= n-i ; star++){
      cout << "* ";
    }
    for (int space = 0; space < i - 1; space++) {
      cout << " ";
    }
    cout << endl;
  }
}

void diamondPattern(int n){
  patternUpTriangle(n);
  patternDownTriangle(n);
}

int main() {
  int n;
  cout << "Enter the Number : ";
  cin >> n;

  patternUpTriangle(n);
  cout<<endl;
  patternDownTriangle(n);
  cout<<endl;
  diamondPattern(n);

  return 0;
}