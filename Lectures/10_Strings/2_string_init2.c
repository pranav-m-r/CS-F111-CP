#include<stdio.h>

int main()
{
    //scanf with %s ignores leading whitespaces.
    //scanf with %s treats preceding whitespace as separator.
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Name is %s\n", name);

    // /*
    int i;
    for(i = 0; i < 20; i++)
        printf("Character %d = %c, %d\n", i, name[i], name[i]);
    // */

//    /*
   //'\0' denotes the end of the string
   name[3] = '\0';
   printf("Name is %s\n", name);
//    */

    return 0;
}