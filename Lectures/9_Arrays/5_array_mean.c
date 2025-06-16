/*
Find out the mean of all numbers in a double array.
*/

#include<stdio.h>

double mean(double a[], int l)
{
    double s = 0.0;
    for(int i = 0; i < l; i++)
        s += a[i];
    double m = s/l;    
    return m;    
}

int main()
{

	int len;

	printf("Enter length of the array: ");
	scanf("%d",&len);

	double arr[len];

	for(int i = 0; i < len; i++)
	{
		printf("Enter real number %i: ", i);
		scanf("%lf", &arr[i]);
	}

	for(int i = 0; i<len; i++)
	{
		printf("%.2lf ", arr[i]);
	}
	printf("\n");

    printf("The mean of all numbers in the array is %.2lf\n", mean(arr, len));

	return 0;
}