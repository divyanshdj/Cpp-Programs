#include <iostream>
#include <vector>
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

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j)
    {
        while (arr[i] <= pivot && i < end)
        {
            i++;
        }

        while (arr[j] > pivot && j > start)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    return j;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex - 1);
        quickSort(arr, pIndex + 1, end);
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

    quickSort(arr, 0, size - 1);

    cout << "Sorted array in ascending order: ";
    printArr(arr, size);

    return 0;
}

// Time Complexity :
// Worst & Average & Best Case -> O(NlogN)

// Space Complexity --> O(1)
