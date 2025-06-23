#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void alternateArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int brr[7] = {7, 6, 5, 4, 3, 2, 10};

    cout << "Original Even Array = ";
    printArray(arr, 8);
    cout << endl;
    alternateArray(arr, 8);
    cout << "Alternate EvenArray = ";
    printArray(arr, 8);
    cout << endl;

    cout << "Original Odd Array = ";
    printArray(brr, 7);
    cout << endl;
    alternateArray(brr, 7);
    cout << "Alternate OddArray = ";
    printArray(brr, 7);
    cout << endl;

    return 0;
}
