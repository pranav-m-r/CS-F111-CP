/*
Find out the sum of all numbers in an array 
by passing the array as a parameter in a function.
*/

#include<stdio.h>

int sum(int a[], int l)
{
    int s = 0;
    printf("Inside the function\n");
    printf("Size of a = %d\n", sizeof(a));
    printf("Size of a[0] = %d\n", sizeof(a[0]));
    for(int i = 0; i < l; i++)
        s += a[i];
    printf("Size of a = %d\n", sizeof(a));    
    return s;    
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

    printf("The sum of all numbers in the array is %d\n", sum(arr, len));

	return 0;
}