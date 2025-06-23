#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    int count = 1;    // To Print Number in Order 123,456,789
    // char count = 'A'; To Print Alphabets in Order ABC,DEF,GHI
    cout << "Enter Number for Pattern : ";
    cin >> n;

    while (i <= n)
    {
        int j=1;
        while (j <= n)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}