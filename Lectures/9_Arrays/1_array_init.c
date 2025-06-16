#include<stdio.h>

int main()
{

	/*
	//Integer Array Initialization
	int arr[5] = {5,3,10,12,6};
	int i = 0;
	while(i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	printf("Size of arr: %d\n", sizeof(arr));
	printf("Size of arr[0]: %d\n", sizeof(arr[0]));

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	*/
	
	/*
	//Some common errors - Arrays are not assignable
	int arr[5] = {5,3,10,12,6};
	int arr2[5];
	//arr2 = arr;
	for(int i = 0; i< 5; i++)
		arr2[i] = arr[i];
	*/

	// /*
	//Double Array Initialization
	double arr[5] = {5.5, 3.2, 10.5, 12.8, 6.9};
	
	printf("Size of arr: %d\n", sizeof(arr));
	printf("Size of arr[0]: %d\n", sizeof(arr[0]));

	for(int i = 0; i<5; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
	*/


	// /*
	//Character Array Initialization
	char arr[5] = {'A', 'E', 'I', 'O', 'U'};

	printf("Size of arr: %d\n", sizeof(arr));
	printf("Size of arr[0]: %d\n", sizeof(arr[0]));

	for(int i = 0; i<5; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
	// */


	/*
	//Integer Array Initialization - 2
	int arr[] = {5,3,10,12,6};

	int len = sizeof(arr)/sizeof(arr[0]);
	printf("Length of array = %d\n", len);

	for(int i = 0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	*/

	return 0;
}