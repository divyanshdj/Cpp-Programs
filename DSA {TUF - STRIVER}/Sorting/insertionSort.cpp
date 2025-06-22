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

void insertion_sort(int arr[], int size)
{
    for(int i=0; i<=size-1; i++){
        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            swapArr(arr[j-1], arr[j]);
            j--;
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

    insertion_sort(arr, size);

    cout << "Sorted array in ascending order: ";
    printArr(arr, size);

    return 0;
}

// Time Complexity :
// Worst & Average Case -> O(N^2)
// Best Case -> O(N)
