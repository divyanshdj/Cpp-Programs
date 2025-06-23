#include <iostream>
using namespace std;

void reverse(int arr[], int i, int size)
{
    if(i >= size/2){
        return;
    }
    swap(arr[i], arr[size-i-1]);
    reverse(arr, i+1, size);
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter " << size << " elements: ";
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, 0, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}