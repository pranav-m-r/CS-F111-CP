#include<stdio.h>

int main()
{
    char name[20] = "Arnab Paul";
    printf("Name is %s\n", name);

    /*
    //How is the string stored in the character array?
    //Strings are ended with the character '\0'
    int i;
    for(i = 0; i < 20; i++)
        printf("Character %d = %c, %d\n", i, name[i], name[i]);
    */

//    /*
   //'\0' denotes the end of the string
   name[3] = '\0';
   printf("Name is %s\n", name);
//    */

    return 0;
}