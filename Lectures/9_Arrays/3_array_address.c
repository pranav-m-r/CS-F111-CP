#include<stdio.h>

int main()
{
	//char arr[5];

	//int arr[5];

	double arr[5];

	printf("The address of arr[0]: %d\n", &arr[0]);
	printf("The address of arr[1]: %d\n", &arr[1]);
	printf("The address of arr[2]: %d\n", &arr[2]);
	printf("The address of arr[3]: %d\n", &arr[3]);
	printf("The address of arr[4]: %d\n", &arr[4]);

	printf("The address of arr[0]: %x\n", &arr[0]);
	printf("The address of arr[1]: %x\n", &arr[1]);
	printf("The address of arr[2]: %x\n", &arr[2]);
	printf("The address of arr[3]: %x\n", &arr[3]);
	printf("The address of arr[4]: %x\n", &arr[4]);

	printf("The address of arr: %d\n", &arr);
	printf("The address of arr: %d\n", arr);

	
    printf("Size of a = %d\n", sizeof(arr));
    printf("Size of a[0] = %d\n", sizeof(arr[0]));
	int len = sizeof(arr)/sizeof(arr[0]);
	printf("The length of the array is: %d\n", len);

	return 0;
}