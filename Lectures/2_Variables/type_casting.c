//Finding the average of 2 numbers

#include<stdio.h>
int main()
{
    
    int a = 2, b = 3;
    double avg = (a + (double)b)/2;
    avg = (a + b)/2;
    printf("Average of %d and %d is %.2lf\n", a, b, avg);

    return 0;
}