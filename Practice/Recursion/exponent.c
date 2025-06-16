#include <stdio.h>

double exponent(double m, double n)
{
    double temp = 1;
    if (n != 0)
    {
        temp = (m * exponent(m, n-1));
    }
    return temp;
}

int main()
{
    double m, n = 0;
    scanf("%lf%lf", &m, &n);
    printf("%lf\n", exponent(m, n));
}