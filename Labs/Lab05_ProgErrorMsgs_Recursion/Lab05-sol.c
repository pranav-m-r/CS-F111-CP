#include <stdio.h>

/**
 * Reports the sum of the digits of the given non-negative integer.
 *
 * Requires n >= 0
 *
 * Examples:
 *    0 sum_digits(0)
 *    2 sum_digits(11)
 *    1 sum_digits(1000)
 */
int sum_digits(int n)
{
  int ans = n;

  if (n > 9)
  {
    ans = n % 10 + sum_digits(n / 10);
  }

  return ans;
}

/**
 * Reports the largest digit in the given non-negative integer.
 *
 * Requires: n >= 0
 *
 * Examples:
 *    0 largest_digit(0)
 *    1 largest_digit(10)
 *    3 largest_digit(33)
 */
int largest_digit(int n)
{
  int ans = n;

  if (n > 9)
  {
    int largest_in_rest = largest_digit(n / 10);
    int units_digit = n % 10;

    if (units_digit > largest_in_rest)
      ans = units_digit;
    else
      ans = largest_in_rest;
  }
  return ans;
}

// DO NOT MAKE ANY CHANGES BEYOND THIS POINT
int main()
{
  int n;
  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  printf("\nThis program can perform two operations:\n");
  printf("\t 1. Report the sum of digits of a number\n");
  printf("\t 2. Report the largest digit in a number\n");
  printf("\n Choose an operation: ");

  int operation;
  scanf("%d", &operation);

  switch (operation)
  {
  case 1:
    printf("The sum of digits of %d is %d\n", n, sum_digits(n));
    break;

  case 2:
    printf("The largest digit in %d is %d\n", n, largest_digit(n));
    break;

  default:
    break;
  }

  return 0;
}