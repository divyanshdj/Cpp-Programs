#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[100];

    cout << "Enter Array Elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << endl << "Original Array = ";
    printArray(arr, size);
    reverseArray(arr, size);
    cout << endl << "Reverse Array = ";
    printArray(arr, size);

    return 0;
}