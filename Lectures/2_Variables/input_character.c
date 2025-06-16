//Taking 3 characters as input and printing them in reverse order

#include<stdio.h>
int main()
{
    char c1, c2, c3;

    printf("Enter 3 characters \n");
    /*
    scanf("%c", &c1);
    //getchar();
    scanf(" %c", &c2);
    //getchar();
    scanf(" %c", &c3);
    */
   scanf("%c %c %c", &c1, &c2, &c3);
    printf("Characters in reverse order: \n%c\n%c\n%c\n", c3, c2, c1);

    return 0;
}