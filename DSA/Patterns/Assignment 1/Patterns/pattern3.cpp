#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the Number : ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "* ";
    }
    for (int space = 0; space < n - i - 1; space++) {
      cout << "    ";
    }
    for (int k = n; k >= n - i; k--) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      cout << "* ";
    }
    for (int space = 0; space < i; space++) {
      cout << "    ";
    }
    for (int k = 0; k < n - i; k++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}