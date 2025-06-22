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
    int i = 0;

    while (i <= right)
    {
        // If current element is 0, swap it with element at left
        if (arr[i] == 0)
        {
            swap(arr[i], arr[left]);
            left++;
            i++; // Move to next element
        }
        // If current element is 2, swap it with element at right
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[right]);
            right--;
        }
        else
        {
            // If current element is 1, no need to swap, move to next element
            i++;
        }
    }

    // int left = 0;
    // int right = size - 1;

    // while (left < right)
    // {
    //     while (arr[left] == 0 && left < right)
    //     {
    //         left++;
    //     }
    //     while (arr[right] == 2 && left < right)
    //     {
    //         right--;
    //     }
    //     if (left < right)
    //     {
    //         swap(arr[left], arr[right]);
    //         left++;
    //         right--;
    //     }
    // }
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