#include<stdio.h>
#include<limits.h>
#include<string.h>

int count_digits(int num)
{
    if (num < 10)
        return 1;
    return 1 + count_digits(num / 10);
}

void reversenum(int num)
{
    if (num == 0)
        return;
    printf("%d", num%10);
    reversenum(num/10);
}

int sumsqr(int m, int n)
{
    if (m == n)
        return m*m;
    return m*m + sumsqr(m+1, n);
}

int sumeven(int m, int n)
{
    int sum = 0;
    while(m != n)
    {
        if (m % 2 == 0)
            sum += m;
        m++;
    }
    return sum;
}

int sumevenrec(int m, int n)
{
    if (m == n)
    {
        if (m % 2 == 0)
            return m;
        else
            return 0;
    }
    if (m % 2 == 0)
        return m + sumevenrec(m+1, n);
    else
        return sumevenrec(m+1, n);
}

void max_secondmax()
{
    int i = 0, n = 0, input = 0, max = INT_MIN, smax = INT_MIN;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    while (i < n)
    {
        scanf("%d", &input);
        if (input > smax)
        {
            if (input > max)
            {
                smax = max;
                max = input;
            }
            else
                smax = input;
        }
        i++;
    }
    printf("%d %d", max, smax);
}

void rmdup(char x[])
{
    int c = 1;
    char out[20] = "";
    out[0] = x[0];
    for (int i = 1; i < strlen(x); i++)
    {
        if (out[c-1] != x[i])
        {
            out[c] = x[i];
            c++;
        } 
    }
    printf("%s\n", out);
}

int main()
{
    
}