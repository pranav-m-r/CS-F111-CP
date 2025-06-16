#include<stdio.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int len = sizeof(a)/sizeof(int);
    for(int i = 0; i< 5; i++)
        printf("%d ", a[i]);

    return 0;
}