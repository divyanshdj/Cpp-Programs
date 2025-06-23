// 16.    
//                      *  
//                      *  
//                      *  
//                      *  
//                *     *  
//                *     *  
//                *  *  *  
//             *  *  *  *  
//             *  *  *  *  
//       *     *  *  *  *  
//       *  *  *  *  *  *   
  
// Print this graph by using this array - {2,1,4,7,5,11}. 

#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
        
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val)
            max_val = arr[i];
    }
    
    for (int i = max_val; i >= 1; i--) {
        for (int j = 0; j < n; j++) {
            if (arr[j] >= i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}