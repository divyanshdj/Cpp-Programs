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

void selection_sort(int arr[], int size){
    for (int i = 0; i <= size-2; i++)
    {
        int min = i;
        for (int j = i; j <= size-1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swapArr(arr[i], arr[min]);
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

    selection_sort(arr,size);

    cout << "Sorted array in ascending order: ";
    printArr(arr, size);

    return 0;
}

// Time Complexity : O(N^2)
