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

void mergeArray(int arr[], int start, int mid, int end)
{
    vector<int> v;

    int left = start;
    int right = mid + 1;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            v.push_back(arr[left]);
            left++;
        }
        else
        {
            v.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        v.push_back(arr[left]);
        left++;
    }

    while(right <= end){
        v.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = v[i - start];
    }
}

void merge_sort(int arr[], int start, int end)
{
    if (start >= end) return;
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    mergeArray(arr, start, mid, end);
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

    merge_sort(arr, 0, size - 1);

    cout << "Sorted array in ascending order: ";
    printArr(arr, size);

    return 0;
}

// Time Complexity :
// Worst & Average & Best Case -> O(NlogN)

// Space Complexity :
// Worst Case -> O(N)
