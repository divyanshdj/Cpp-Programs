#include <iostream>
using namespace std;

void getArray(int arr[], int size)
{
    cout << "(Only 0's & 1's) : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortOne(int arr[], int size)
{

    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter Number For Array : ";
    cin >> size;
    int arr[100];

    getArray(arr, size);

    sortOne(arr, size);

    printArray(arr, size);

    return 0;
}