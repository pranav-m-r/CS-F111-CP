#include<stdio.h>
int main()
{
    int i = 22;
    int j =7;
    int rem = i%j;
    printf("Remainder of %d and %d is %d\n", i, j, rem);
    printf("i++ = %d\n", i++);
    printf("++i = %d\n", ++i);
    printf("i = %d\n", i);
    printf("j < i = %d\n", j < i);
    printf("i==j is %d\n", i==j);
    printf("i!=j is %d\n", i!=j);
    //printf("Division by zero = %d", i/0);
    return 0;
}