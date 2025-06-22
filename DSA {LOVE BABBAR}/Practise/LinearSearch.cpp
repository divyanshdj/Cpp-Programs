#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {10, 2, 4, 18, 91, 34, 19, -12, 68, 1};
    // cout << "Array = ";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
    cout << endl << "Enter Element to Search : ";
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if (found)
    {
        cout << "Key Element is in Array!"<<endl;
    }
    else
    {
        cout << "Key Element is Not Preset in Array!"<<endl;
    }
    return 0;
}