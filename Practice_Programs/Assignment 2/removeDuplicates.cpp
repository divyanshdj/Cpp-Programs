// 17.  Write a C++ program to Remove Duplicates From Sorted Array.

// 18. Write a C++ program to Remove Duplicates From Unsorted Array.

#include <iostream>
using namespace std;

void delete_duplicates(int arr[], int &size, int pos)
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "After removing duplicates from the array : ";

    for(int j = 0; j < size; j++){
        if(arr[j] == arr[j+1]){
            delete_duplicates(arr, size, j);
            j--;
        }
        else{
            cout << arr[j] << " ";
        }
    } 

    return 0;
}