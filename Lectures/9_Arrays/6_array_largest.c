/*
Find out the largest of all numbers in an integer array 
by passing the array as a parameter in a function.
*/

#include<stdio.h>

int largest(int a[], int len)
{
    int l = a[0];
    for(int i = 1; i < len; i++)
    {
        if(a[i] > l)
            l = a[i];
    }
    return l;    
}

int main()
{

	int len;

	printf("Enter length of the array: ");
	scanf("%d",&len);

	int arr[len];

	for(int i = 0; i < len; i++)
	{
		printf("Enter element %d: ", i);
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

    printf("The largest of all numbers in the array is %d\n", largest(arr, len));

	return 0;
}