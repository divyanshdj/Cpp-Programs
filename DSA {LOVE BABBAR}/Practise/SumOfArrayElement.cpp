#include <iostream>
using namespace std;

int sumofArray(int arr[], int size)
{
    int sum = 0;

    for(int i=0 ; i<size ; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int size;
    cout<<"Enter Size of Array : ";
    cin>>size;

    int arr[100];

    cout<<"Enter Array Elements : ";
    for(int i=0 ; i<size ; i++)
    {
        cin>>arr[i];
    }

    int sum = sumofArray(arr , size);

    cout<<"Sum of Array Elememt = "<<sum<<endl;

    return 0;
}