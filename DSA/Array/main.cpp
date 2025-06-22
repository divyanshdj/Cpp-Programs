#include "Insert.h"
#include <iostream>
using namespace std;

void getArrayElements(int arr[], int size)
{
    cout << "Enter " << size << " elements of an Array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
}

void insertInArray(int arr[], int &size, int pos, int key)
{
    for (int i = size; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    size++;
    arr[pos] = key;
    cout << "Size : " << size << endl;
    cout << endl;
}

void removeInArray(int arr[], int &size, int pos)
{
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Size : " << size << endl;
    cout << endl;
}

void updateInArray(int arr[], int pos, int key)
{
    arr[pos] = key;
}

void putArrayElements(int arr[], int size)
{
    cout << "Array Elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size : " << size << endl;
}

int main()
{
    int size;
    cout << endl;
    cout << "Enter Size of an Array : ";
    cin >> size;

    int *arr = new int[size];

    getArrayElements(arr, size);

    int c;
    cout << "----------*----------" << endl;
    cout << "Enter Your Choice : " << endl;
    cout << "1 -> Insert in Array" << endl;
    cout << "2 -> Delete in Array" << endl;
    cout << "3 -> Update in Array" << endl;
    cout << "----------*----------" << endl;

    cout << "-----> ";
    cin >> c;

    switch (c)
    {
    case 1:
    {
        int insertValueNumber;
        cout << "Enter the number of times you want to Insert :- ";
        cin >> insertValueNumber;

        cout << endl;

        int loopNum = 1;
        do
        {
            int pos, key;

            cout << "Enter Position You Want to insert element : ";
            cin >> pos;
            cout << "Enter Key You Want to insert at " << pos << " : ";
            cin >> key;

            insertInArray(arr, size, pos, key);

            loopNum++;
        } while (loopNum <= insertValueNumber);
        break;
    }

    case 2:
    {
        int insertValueNumber;
        cout << "Enter the number of times you want to Delete :- ";
        cin >> insertValueNumber;

        cout << endl;

        int loopNum = 1;
        do
        {
            int pos;

            cout << "Enter Position You Want to remove element : ";
            cin >> pos;

            removeInArray(arr, size, pos);

            loopNum++;
        } while (loopNum <= insertValueNumber);
        break;
    }

    case 3:
    {
        int pos, key;

        cout << "Enter Position You Want to update element : ";
        cin >> pos;
        cout << "Enter Key You Want to update at " << pos << " : ";
        cin >> key;

        updateInArray(arr,pos,key);
        break;
    }

    default:
    {
        cout << "Wrong Choice!!!!!" << endl;
        cout << "-*- NO CHANGES OCCURS -*-" << endl;
        break;
    }
    }

    putArrayElements(arr, size);

    return 0;
}


