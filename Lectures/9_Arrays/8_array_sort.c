/*
Insertion Sort for arranging elements in ascending order.
*/

#include <stdio.h>

void printArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void insertionSort(int arr[], int len)
{
    for (int i = 1; i < len; i++) 
    {
        printf("Pass %d\n", i);
        int key = arr[i];
        int j = i - 1;
 
        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, len);
    }
}
  
int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Initial Array: \n");
    printArray(arr, len);
    insertionSort(arr, len);
    
 
    return 0;
}