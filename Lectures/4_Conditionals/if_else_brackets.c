/*if-else without brackets
   - if and else attach to first instruction immediately after it.
   - else attaches to the latest unattached if
*/

#include<stdio.h>

int main()
{
    int x = 5;

    if (x >= 0)
    if (x > 0)
    printf("Strictly Positive ");
    else
    printf("Zero ");
    else
    printf("Negative ");
    printf("Number");

    return 0;
}