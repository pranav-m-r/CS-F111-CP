#include<stdio.h>

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
	return 0;
}