/*
Arrays are not assignable but when copying structures, it performs a deep copy.
*/

#include <stdio.h>

int main()
{
    struct example
    {
      int x[3];
      char y;
    };   

    struct example x1, x2;

    int a[3] = {10,20,30};

    //x1.x = a;// Will this work? 

    x1.x[0] = 10;
    x1.x[1] = 20;
    x1.x[2] = 30;
    x1.y = 'A';

    for(int i = 0; i < 3; i++)
        printf("x1.x[%d] = %d\n", i, x1.x[i]);
    printf("x1.y = %c\n", x1.y);    

    x2=x1; 

    for(int i = 0; i < 3; i++)
        printf("x2.x[%d] = %d\n", i, x2.x[i]);
    printf("x2.y = %c\n", x2.y); 

    return 0;
}