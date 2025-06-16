#include <stdio.h>

int digits(int num)
{
    double temp = 1;
    if (num/10 != 0)
    {
        temp = digits(num/10) + 1;
    }
    return temp;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}