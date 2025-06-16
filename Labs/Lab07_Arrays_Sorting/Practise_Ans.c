#include <stdio.h>

void PrintArray(int arr[], int n)  //Function to print the array. Do not change this
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int Search(int arr[], int n, int key) //Function that returns the index of the key in the array. Return -1 if key is not found
{
    //Write your code for searching here.
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

void SwapGreaterElement(int arr[], int n) //Swaps adjacent elements of the array
{
    //Write your code here.
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }

    PrintArray(arr,n);
}


/* ----------------------------------------------------------------------------
 Implement Bubble Sort on the array to sort in ascending order:

 1.Check for every adjacent pair in the array.
 2.If the first no. is greater than the second no. then swap them.
 3.Repeat this process n times and the array would be sorted in ascending order.
-------------------------------------------------------------------------------*/

void BubbleSort(int arr[], int n)
{
    //Write your code for sorting here.
    for(int i=0;i<n;i++)
    {
        SwapGreaterElement(arr,n-i);
    }
    PrintArray(arr,n);
}

int main() //Do not add anything to main. Uncomment the lines as per the instructions
{
    /*You can test your code by changing this array.
    NOTE: If you change the size of the array then pass the correct size accordingly.*/
    int arr[]={6,4,6,7,3,9,1,10,5,0};
    int n = 10;

    // int key = 5;
    // int result = Search(arr,n,key);
    // if(result==-1)
    // {
    //     printf("%d was not found\n",key);
    // }
    // else
    // {
    //     printf("%d was found at index %d",key,result);
    // }
    
    //SwapGreaterElement(arr,n);

    BubbleSort(arr,n);
    
    return 0;
}