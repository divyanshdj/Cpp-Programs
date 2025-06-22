#include <iostream>
using namespace std;

class Bubble
{
private:
    int n, temp;
    int arr[20];

public:
    void getArray()
    {
        cout << "Enter Size of Array: ";
        cin >> n;

        if (n < 1 || n > 20)
        {
            cout << "Invalid array size. Please enter a size between 1 and 20." << endl;
            exit(1);
        }

        cout << "Enter " << n << " Array Elements: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void sortArray()
    {
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

    void putArray()
    {
        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++)
        {
            cout << " " << arr[i];
        }
        cout << endl;
    }
};

int main()
{
    Bubble obj;
    obj.getArray();
    obj.sortArray();
    cout << endl
         << "This is the Sorted Array:" << endl;
    obj.putArray();
    return 0;
}
