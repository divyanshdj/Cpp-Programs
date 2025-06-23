#include <iostream>
using namespace std;

void inputArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapArr(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubble_sort(int arr[], int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int didSwap = 0; 
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapArr(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) //Best case if Array is Already Sorted -> Time Complexity : O(N)
        {
            break;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array: ";
    inputArr(arr, size);

    cout << "Original array: ";
    printArr(arr, size);

    cout << "\n";

    bubble_sort(arr, size);

    cout << "Sorted array in ascending order: ";
    printArr(arr, size);

    return 0;
}

// Time Complexity :
// Worst & Average Case -> O(N^2)
// Best Case -> O(N)
