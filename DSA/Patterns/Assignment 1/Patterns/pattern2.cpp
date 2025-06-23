#include <iostream>
using namespace std;

int main() {
  int i=5;
  while(i>=1){
    int j = 1;
    int k = 0;
    while(k<=5-i){
      cout<<"  ";
      k++;
    }
    while(j<=i){
      cout<<"* ";
      j++;
    }
    cout<<endl;
    i--;
  }
  return 0;
}