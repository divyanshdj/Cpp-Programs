/*

Linear Search Algorithm
https://www.geeksforgeeks.org/linear-search/

*/

#include <iostream>
using namespace std;

class Linear
{
private:
    int n;
    int arr[15];

public:
    void getArray()
    {
        cout << "Enter Size of Array: ";
        cin >> n;

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

    bool searchKey(int key)
    {
        for (int i = 0; i < n; i++)
        {
            if (key == arr[i])
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    int key, res;
    Linear obj;
    obj.getArray();
    cout << "Enter Key Number to Search : ";
    cin >> key;
    res = obj.searchKey(key);
    if (res)
    {
        cout << "Key Element " << key << " is in Array!" << endl;
    }
    else
    {
        cout << "Element is not found in Array!!!" << endl;
    }
    return 0;
}
