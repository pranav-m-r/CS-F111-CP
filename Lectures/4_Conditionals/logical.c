/*
&& - AND results in TRUE only if ALL expressions result to TRUE
|| - OR results in TRUE if ANY ONE expression result to TRUE
! - Negates the Result
*/

#include<stdio.h>

int main()
{
    int x = 5, y = 12;
    printf("((x > 0) && (x < 10)) Result = %d\n", ((x > 0) && (x < 10)));
    printf("((x <= 0) || (x >= 10)) Result = %d\n", ((x <= 0) || (x >= 10)));
    printf("((x - 1) == ((y/5) + (y%%5))) Result = %d\n", ((x - 1) == ((y/5) + (y%5))));
    printf("((x != y) || !(x==y)) Result = %d\n", ((x != y) || !(x==y)));
    return 0;
}   