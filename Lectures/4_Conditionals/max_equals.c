//Print maximum of 2 numbers. If both are equal, print "both are equal"

#include<stdio.h>

int maximum(int num1, int num2)
{
    int max;
    if(num1 == num2)
    {
        printf("Both are equal\n");
        return num1-1;
    }
    else if(num1 > num2)
        return num1;
    else
        return num2;
}

int main()
{
    int x = 5, y = 5;
    int m = maximum(x, y);
    if(m != (x-1))
        printf("The greater value is %d\n", m);
    return 0;
}
