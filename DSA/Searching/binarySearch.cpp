#include <iostream>
using namespace std;

void getArray(int arr[], int n)
{
    if (n < 1 || n > 15)
    {
        cout << "Invalid array size. Please enter a size between 1 and 15." << endl;
        exit(1);
    }

    cout << "Enter " << n << " Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void sortArray(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int searchKey(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

void putArray(int arr[], int n)
{
    cout << endl;
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    int key, n, index;
    int arr[15];
    cout << "Enter Size of Array: ";
    cin >> n;
    getArray(arr, n);
    sortArray(arr, n);
    cout << "Enter Key Number to Search : ";
    cin >> key;
    putArray(arr, n);
    index = searchKey(arr, n, key);
    cout << "Element is Found " << arr[index] << " at index " << index << endl;
    return 0;
}