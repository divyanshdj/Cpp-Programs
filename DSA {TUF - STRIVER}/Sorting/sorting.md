## Bubble Sort
```
void bubble_sort(int arr[], int size){
    for(int i=1; i<=size-1; i++){
        for(int j=0; j<=i; j++){
            if(arr[j] > arr[j+1]){
                swapArr(arr[j], arr[j+1]);
            }
        }
    }
}
```

## Selection Sort

```
void selection_sort(int arr[], int size){
    for (int i = 0; i <= size-2; i++)
    {
        int min = i;
        for (int j = i; j <= size-1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swapArr(arr[i], arr[min]);
    }
}
```