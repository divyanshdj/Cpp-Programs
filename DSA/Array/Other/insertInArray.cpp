#include <iostream>
using namespace std;
void insertInArray(int arr[], int &size, int pos, int key)
{
    for (int i = size; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    size++;
    arr[pos] = key;
    cout << "Size : " << size << endl;
    cout << endl;
}