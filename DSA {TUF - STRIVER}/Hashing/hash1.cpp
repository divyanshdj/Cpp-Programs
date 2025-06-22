#include <iostream>
#include <climits>
using namespace std;
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

    int length = sizeof(arr) / sizeof(arr[0]);

    int uSize;
    cout << "Enter the Uniqueness Size of the array: ";
    cin >> uSize;

    cout<<endl;

    int hashArray[uSize] = {0};

    int i = 0;
    while (i < length)
    {
        hashArray[arr[i]]++;
        i++;
    }

    for (int i = 0; i < uSize; i++)
    {
        cout << i << " -> " << hashArray[i] << "  ";
    }

    cout << endl;
    int maxCount = INT_MIN;
    int maxElement;
    for (int i = 0; i < uSize; i++)
    {
        if (hashArray[i] > maxCount)
        {
            maxCount = hashArray[i];
            maxElement = i;
        }
    }
    cout << "The most frequent element is " << maxElement << " with count " << maxCount << endl;
    cout << endl;
    int minCount = INT_MAX;
    int minElement;
    for (int i = 0; i < uSize; i++)
    {
        if (hashArray[i] < minCount)
        {
            minCount = hashArray[i];
            minElement = i;
        }
    }
    cout << "The least frequent element is " << minElement << " with count " << minCount << endl;
    cout << endl;
    return 0;
}