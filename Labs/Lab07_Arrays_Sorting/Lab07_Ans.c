#include <stdio.h>

void PrintArray(int arr[], int n)  //Function to print the array. Do not change this
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/* ----------------------------------------------------------------------------
 Implement Selection Sort on the array to sort in ascending order:

 1.Find the position of the maximum number.
 2.Swap it with the last element in the array.
 3.Then find the position of the second highest number and swap it with the second last element.
 4.Repeat this n times and the array will be sorted in ascending order.
-------------------------------------------------------------------------------*/

void SelectionSort(int a[], int n)
{
    //Write your code for sorting here
    for(int i=0;i<n;i++)
    {
        int maxPos=0;
        for(int j=1;j<n-i;j++)
        {
            if(a[j]>a[maxPos])
            {
                maxPos=j;
            }
        }
        int temp=a[n-i-1];
        a[n-i-1]=a[maxPos];
        a[maxPos]=temp;
    }
    
   PrintArray(a,n); 
}

int main() //Do not change main
{
    int arr1[]={6,4,6,7,3,9,1,10,5,0};
    int arr2[]={10,9,8,7,6,5,4,3,2,1};

    SelectionSort(arr1,10);
    SelectionSort(arr2,10);

    return 0;
}