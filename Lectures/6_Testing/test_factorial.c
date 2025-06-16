#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void check(bool expr, char* message) 
{
    if (expr) 
    { 
        printf("[PASS] "); 
    }
    else 
    { 
        printf("[FAIL] "); 
    }
    printf("%s", message);
}

/**
* @brief Reports if the given numbers are within 1%
* relative error of each other.
*/
bool approx_eq(double expected, double actual) 
{
    const double EPS = .01;
    double relative_error = fabs(expected - actual)/actual;
    return relative_error < EPS;
}

/**
* @brief Computes the approximate
* factorial of the given number using
* Gosper's formula.
* Requires: n>=0
* The formula is: n! ≈ (n^n) * (e^−n) * sqrt((2n+1/3)π).
*/
double factorial(int n) 
{
    double term1 = pow(n, n);
    double term2 = pow(M_E, -n);
    double subterm = 2 * n + (double) 1/3;
    double term3 = sqrt(subterm * M_PI);
    return term1 * term2 * term3;
}

int main()
{
    printf("5! = %lf\n", factorial(5));
    check(approx_eq(120, factorial(5)), "5! = 120\n");
    return 0;
}