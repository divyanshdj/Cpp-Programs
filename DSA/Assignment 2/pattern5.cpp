/*
0 1 1 1 0
1 1 1 1 1
1 1 0 1 1
1 1 1 1 1
0 1 1 1 0
*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if ((i == 1 || i == 5) && (j == 1 || j == 5)) {
                cout << "0 ";
            }
            else if (i == 3 && j == 3) {
                cout << "0 ";
            }
            else {
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}
